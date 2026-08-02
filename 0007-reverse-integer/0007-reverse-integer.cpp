class Solution {
public:
    int reverse(int x) {
        int Revdigit = 0;
        while(x !=0){
            int digit = x % 10;
            if(Revdigit > INT_MAX/10 || Revdigit < INT_MIN/10){
                return 0;
            }
            Revdigit = (Revdigit * 10) + digit;
            x /= 10;
        }
        return Revdigit;
        
    }
};