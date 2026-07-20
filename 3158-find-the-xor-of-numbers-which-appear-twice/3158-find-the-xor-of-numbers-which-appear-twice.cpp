
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        int ans = 0;
        for (auto& p : freq) {
            if (p.second == 2) {
                ans ^= p.first;
            }
        }

        return ans;
    }
};