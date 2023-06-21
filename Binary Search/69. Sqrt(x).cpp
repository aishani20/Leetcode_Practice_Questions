class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
    long long int s=0;
    long long int e=x-1;
    long long int m=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
      if (m * m == x) {
        return m;
      }
        if(m*m>x){
            e=m-1;
        }
        else{
            ans=m;
            s=m+1;
        }
        m=s+(e-s)/2;
        
    }
    return ans;
        
        
    }
};