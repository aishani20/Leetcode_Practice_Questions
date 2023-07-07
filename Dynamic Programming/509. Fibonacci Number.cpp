//Approach-1 Recursion
class Solution {
public:
int recursivesolve(int n){
    //base case
        if(n==0 || n==1){
            return n;
        }
        int ans=recursivesolve(n-1)+recursivesolve(n-2);
        return ans;
}
    int fib(int n) {
      int ans=recursivesolve(n);
      return ans;
    }
};

//Approach-2 Recursion+Memoization(TOP DOWN APPROACH)
class Solution {
public:
int recursivesolve(int n){
    //base case
        if(n==0 || n==1){
            return n;
        }
        int ans=recursivesolve(n-1)+recursivesolve(n-2);
        return ans;
}

int topdownsolve(int n ,vector<int>& dp){
    //base case
        if(n==0 || n==1){
            return n;
        }
        //step-3: check if answer already exists 
        if(dp[n]!=-1){
            return dp[n];
        }
        //step-2: replace ans with dp[n ]
        //ans dp ke andar store karo
        dp[n]=topdownsolve(n-1,dp)+topdownsolve(n-2,dp);
        return dp[n];

}
    int fib(int n) {
    //   int ans=recursivesolve(n);
    //   return ans;


    //STEP-1 create dp array
    vector<int>dp(n+1,-1);
    //dp array pass kar diya jo bhi function create kiya
    int ans =topdownsolve(n,dp);
    return ans;

    }
};

class Solution {
public:
int recursivesolve(int n){
    //base case
        if(n==0 || n==1){
            return n;
        }
        int ans=recursivesolve(n-1)+recursivesolve(n-2);
        return ans;
}

// APPROACH-3 bottom up approach[TABULATION METHOD]
int topdownsolve(int n ,vector<int>& dp){
    //base case
        if(n==0 || n==1){
            return n;
        }
        //step-3: check if answer already exists 
        if(dp[n]!=-1){
            return dp[n];
        }
        //step-2: replace ans with dp[n ]
        //ans dp ke andar store karo
        dp[n]=topdownsolve(n-1,dp)+topdownsolve(n-2,dp);
        return dp[n];

}
//bottom up approach[TABULATION METHOD]
int bottomupsolve(int n){
    //STEP-1 create a dp array
    vector<int>dp(n+1,-1);
    //STEP-2 base case dekho upar wale ka and accordingly value fill karo
    dp[0]=0;
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
int fib(int n) {
    //   int ans=recursivesolve(n);
    //   return ans;


    // //STEP-1 create dp array
    // vector<int>dp(n+1,-1);
    // //dp array pass kar diya jo bhi function create kiya
    // int ans =topdownsolve(n,dp);
    // return ans;

    return bottomupsolve(n);

    }
};
    
// APPROACH-4 SpaceOptimization Method
class Solution {
public:
int recursivesolve(int n){
    //base case
        if(n==0 || n==1){
            return n;
        }
        int ans=recursivesolve(n-1)+recursivesolve(n-2);
        return ans;
}


int topdownsolve(int n ,vector<int>& dp){
    //base case
        if(n==0 || n==1){
            return n;
        }
        //step-3: check if answer already exists 
        if(dp[n]!=-1){
            return dp[n];
        }
        //step-2: replace ans with dp[n ]
        //ans dp ke andar store karo
        dp[n]=topdownsolve(n-1,dp)+topdownsolve(n-2,dp);
        return dp[n];

}
//bottom up approach[TABULATION METHOD]
int bottomupsolve(int n){
    //STEP-1 create a dp array
    vector<int>dp(n+1,-1);
    //STEP-2 base case dekho upar wale ka and accordingly value fill karo
    dp[0]=0;
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

int spaceoptimizationsolve(int n){
  
    //STEP-2 base case dekho upar wale ka and accordingly value fill karo
    int prev2=0;
    int prev1=1;
    int curr;
    if(n==0){
        return prev2;
    }
    if(n==1){
        return prev1;
    }
   
    //STEP-3 top down approach main n kaise travel kar raha hai
    for(int i=2;i<=n;i++){
        curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    return curr;
    
}
    int fib(int n) {
    //   int ans=recursivesolve(n);
    //   return ans;


    // //STEP-1 create dp array
    // vector<int>dp(n+1,-1);
    // //dp array pass kar diya jo bhi function create kiya
    // int ans =topdownsolve(n,dp);
    // return ans;

    return spaceoptimizationsolve(n);

    }
};