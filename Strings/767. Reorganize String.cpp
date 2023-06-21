class Solution {
public:
    string reorganizeString(string s) {
        //step 1 : Make the hash and store the frequency of hash
     int hash[26] = {0};      
     
     for(int i=0;i<s.size();i++)
     {
         hash[s[i]-'a']++; //increases the count of the character in hash...
     } //O(n)

     // step 2: Find the most frequent character...
       char most_freq_char;
       int max_freq=INT_MIN;

       for(int i=0;i<26;i++)
       {
           if(hash[i] > max_freq)
           {
               max_freq = hash[i];
               most_freq_char = i+'a';// i starts from 0 but we want most occurant character which is starts from ASCII 97 thats why we add 'a'...
           }
       }   //O(1) -->we can ignore

    // step 3 : Placing to the correct position...
    int index=0;

    while(max_freq>0 && index < s.size()) // tab tak place kro jab tak max_freq 0 nahi ho jati AND index string ke under ho...
    {
        s[index] = most_freq_char;
        max_freq--;
        index = index+2;
    } 

    //If all the most_freq_char elements are placed then max_freq is 0 ->no problem but max_freq is !=0 then problem hai bhai...
    if(max_freq !=0) 
    {
        return "";
    }

    //Now if the most_freq_char placed correctly ..Now for remaining elemnts
    
    hash[most_freq_char-'a'] = 0;//most freq char place ho chuka hai ab ghar jaa

    //lets play the rest of the characters...
   
    for(int i=0;i<26;i++)
    {
        while(hash[i] > 0) //je place zalet te 0 astil naa...
        {
            index = index>=s.size()?1:index;
            s[index] = i+'a';
            hash[i]--;//after placing the character decrement its frequency...
            index = index+2;
        }
    } //O(26*n)~O(n)
      return s;
    }
};