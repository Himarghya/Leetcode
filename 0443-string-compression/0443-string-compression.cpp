class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;   // Position to write compressed characters
        int i = 0;       // Read pointer

        while (i < n) {
            char current = chars[i];
            int count = 0;

            // Count consecutive occurrences
            while (i < n && chars[i] == current) {
                count++;
                i++;
            }

            // Write the character
            chars[write++] = current;

            // Write the count if greater than 1
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[write++] = c;
                }
            }
        }

        return write;
    }
};