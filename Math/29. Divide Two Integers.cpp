class Solution {
public:
    int divide(int dividend, int divisor) {
        
        long long int s=0;
        long long int e=abs(dividend);
        long long int m=s+(e-s)/2;
        long long int ans=0;
        if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
            return INT_MAX;
        }
          if (divisor == 0 || (dividend == INT_MIN && divisor == 1)) 
            return INT_MIN;

        while(s<=e){
            if(abs(m*divisor)==abs(dividend)){
                ans=m;
                break;
        }
        if(abs(m*divisor)>abs(dividend)){
            e=m-1;
        }
        else{
            ans=m;
            s=m+1;
        }
        m=s+(e-s)/2;
        }
        if(divisor<0 && dividend<0 || divisor>0 && dividend>0)
        return ans;
        else{
            return -ans;
        }
        }
    
};