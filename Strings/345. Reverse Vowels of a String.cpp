class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
        int p=0;
        int q=n-1;
    
      

   
        while(p<=q){
            if(s[p]=='a' || s[p]=='e' || s[p]=='i' || s[p]=='o' || s[p]=='u' || s[p]=='A' || s[p]=='E' || s[p]=='I'|| s[p]=='O' || s[p]=='U' )
            {
                if(s[q]=='a' || s[q]=='e' || s[q]=='i' || s[q]=='o' || s[q]=='u' || s[q]=='A' || s[q]=='E' || s[q]=='I'|| s[q]=='O' || s[q]=='U')
                {
           
            
            swap(s[p],s[q]);
            p++;
            q--;
           
        }
        else q--;
            }
             else 
            {
                p++;
            }      
        }
     return s;
    
    }
};