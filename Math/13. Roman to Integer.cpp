class Solution {
public:
    int romanToInt(string s) {

        int ans =0;
        int previous=0;

        for (int i = s.length() ; i >= 0; i--) {
        int current = 0;
        
        switch (s[i]) {
            case 'I':
                current = 1;
                break;
            case 'V':
                current = 5;
                break;
            case 'X':
                current = 10;
                break;
            case 'L':
                current = 50;
                break;
            case 'C':
                current = 100;
                break;
            case 'D':
                current = 500;
                break;
            case 'M':
                current = 1000;
                break;
            default:
                break;
        }



        if (current < previous) {
            ans -= current;
        } else {
            ans += current;
        }
        
        previous = current;
    }
      return ans;
    }
};