class Solution {
public:


    //bottom up approach[TABULATION METHOD]
    int bottomupsolve(int n){
    //STEP-1 create a dp array
    vector<int>dp(n+1);
    //STEP-2 base case dekho upar wale ka and accordingly value fill karo
    dp[0]=1;
    if(n==0){
        return dp[0];
    }
    dp[1]=1;
    if(n==1){
        return dp[1];
    }
    //STEP-3 top down approach main n kaise travel kar raha hai
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
    
}

int climbStairs(int n) {
        

        return bottomupsolve(n);
        
    }

};