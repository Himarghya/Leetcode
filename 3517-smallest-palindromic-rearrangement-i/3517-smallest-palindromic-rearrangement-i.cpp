class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string left = "";
        char middle = '\0';

        // Build the left half in alphabetical order
        for (int i = 0; i < 26; i++) {
            left.append(freq[i] / 2, char('a' + i));

            // Find the character that occurs an odd number of times
            if (freq[i] % 2 == 1) {
                middle = char('a' + i);
            }
        }

        // Create the right half
        string right = left;
        reverse(right.begin(), right.end());

        // Combine left + middle + right
        if (middle != '\0') {
            return left + middle + right;
        }

        return left + right;
    }
};