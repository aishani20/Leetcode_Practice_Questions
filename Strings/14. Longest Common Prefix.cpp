class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        //compare first and last strings
        string first =strs[0];
        string last =strs[n-1];
        for(int i=0;i<first.size();i++){
            if(first[i]==last[i]){
                ans= ans +first[i];
            }
            else{
                break;
            }

        }
        return ans;



    }
};