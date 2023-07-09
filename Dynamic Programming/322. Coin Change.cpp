//APPROACH-1 [TLE]
class Solution {
public:
int solveusingrecursion(vector<int>& coins, int amount){
    //base case
    if(amount==0){
        return 0;
    }
    if(amount<0){
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=solveusingrecursion(coins,amount-coins[i]);
        if(ans!=INT_MAX){
            mini=min(mini,1+ans);
        }
    }
    return mini;
}
    int coinChange(vector<int>& coins, int amount) {
         int ans=solveusingrecursion(coins,amount);
         if(ans==INT_MAX)
             return -1;
         else
         return ans;
    }
};

//APPROACH-2 [TOP-DOWN APPROACH]
class Solution {
public:
int solveusingrecursion(vector<int>& coins, int amount){
    //base case
    if(amount==0){
        return 0;
    }
    if(amount<0){
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=solveusingrecursion(coins,amount-coins[i]);
        if(ans!=INT_MAX){
            mini=min(mini,1+ans);
        }
    }
    return mini;
}
int solvemem(vector<int>& coins,int amount,vector<int>& dp){
     //base case
    if(amount==0){
        return 0;
    }
    if(amount<0){
        return INT_MAX;
    }
    //check if answer already exists
    if(dp[amount]!=-1){
        return dp[amount];
    }
    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=solvemem(coins,amount-coins[i],dp);
        if(ans!=INT_MAX){
            mini=min(mini,1+ans);
        }
    }
    dp[amount]=mini;
    return mini;
}
     int coinChange(vector<int>& coins, int amount) {
    //      int ans=solveusingrecursion(coins,amount);
    //      if(ans==INT_MAX)
    //          return -1;
    //      else
    //      return ans;
    // }

    //step-1 create dp array
    vector<int>dp(amount+1,-1);
    int ans=solvemem(coins,amount,dp);
    if(ans==INT_MAX)
        return -1;
        else
        return ans;
     }

};

//APPROACH-3 [BOTTOM-UP APPROAHCH]
