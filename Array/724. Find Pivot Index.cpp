class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
       
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        
        }
        int leftsum=0;
        int endsum=sum;
        for(int i=0;i<nums.size();i++){
            if(2*leftsum==(sum-nums[i]))
            return i;
            leftsum=leftsum+nums[i];
            
        }
        return -1;

        }
    
    
};