class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        int initialOnes = count(s.begin(), s.end(), '1');

        // Augment with '1' at both ends
        string t = "1" + s + "1";

        vector<pair<char,int>> groups;

        // Run-length encode the augmented string
        for (char c : t) {
            if (groups.empty() || groups.back().first != c)
                groups.push_back({c, 1});
            else
                groups.back().second++;
        }

        int bestGain = 0;

        // Look for 0-block, 1-block, 0-block pattern
        for (int i = 1; i + 1 < groups.size(); i++) {
            if (groups[i].first == '1' &&
                groups[i - 1].first == '0' &&
                groups[i + 1].first == '0') {

                int gain = groups[i - 1].second + groups[i + 1].second;
                bestGain = max(bestGain, gain);
            }
        }

        return initialOnes + bestGain;
    }
};