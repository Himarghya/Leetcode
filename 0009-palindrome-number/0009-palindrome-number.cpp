class Solution {
public:
    bool isPalindrome(int x) {
        string ch = to_string(x);
        int start = 0; int end = ch.length() - 1;
        while(start <= end){
            swap(ch[start] , ch[end]);
            start++;
            end--;
        }
        if(ch == to_string(x)){
            return true;
        }
        return false;

        
    }
};