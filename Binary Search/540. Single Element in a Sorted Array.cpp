class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=1;
        int e=nums.size()-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            
            if(mid%2==0){
                if(nums[mid]==nums[mid-1]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else if(mid%2==1)
            {
                if(nums[mid]==nums[mid-1]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return nums[e];
    }
};