class Solution {
public:
void printpermutation(vector<int>& v,vector<vector<int>> &ans, int i){
     //base case
        if(i >=v.size()){
            ans.push_back(v);
            return;
        }
        //swapping
        for(int j=i;j<v.size();j++){
            swap(v[i],v[j]);
            //rec call
            printpermutation(v,ans,i+1);
            //backtracking call
            swap(v[i],v[j]);


        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        printpermutation(nums,ans,0);
        return ans;
    }
       
};