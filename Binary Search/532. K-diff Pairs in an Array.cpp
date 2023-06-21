class Solution {
public:
int search(vector<int>& nums,int x ,int s){
    int e=nums.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==x)
        return mid;
        else if(x>nums[mid])
        s=mid+1;
        else
        e=mid-1;
    }
    return -1;
}  
 int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
            set<pair<int,int>>ans;
            for(int i=0;i<nums.size();i++){
                if(search(nums,nums[i]+k,i+1)!=-1)
                ans.insert({nums[i],nums[i]+k});
        }
        return ans.size();
    }
 

};