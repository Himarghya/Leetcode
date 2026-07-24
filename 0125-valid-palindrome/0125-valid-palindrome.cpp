class Solution {
public:
    bool isCharacter(char ch) {
        if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z')) {
            return true;
        } else {
            return false;
        }
    }
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        while (start <= end) {
            if (!isCharacter(tolower(s[start]))) {
                start++;
                continue;
            }
            if (!isCharacter(tolower(s[end]))) {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};