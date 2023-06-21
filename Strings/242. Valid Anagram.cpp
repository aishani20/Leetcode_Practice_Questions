class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map<char,int>s1,t1;
        for(int i=0;i<s.size();i++){
            s1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            t1[t[i]]++;
        }
        if(s.size() != t.size()) return false;
        if(s1 == t1) return true;
        return false;
    }
};
    
       
  