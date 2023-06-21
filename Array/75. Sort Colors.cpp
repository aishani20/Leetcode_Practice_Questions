class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0;
        int l=0;
        int e=nums.size()-1;
        while(l<=e){
            if(nums[l]==0){
                swap(nums[l],nums[s]);
                s++;
                l++;
            }
            else if(nums[l]==1)
                
                l++;
            
            else {
                swap(nums[l],nums[e]);
                e--;

            }

        }
        
    }
};