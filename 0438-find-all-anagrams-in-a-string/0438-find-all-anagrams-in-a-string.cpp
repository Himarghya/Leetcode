class Solution {
public:
    bool IsValid(int freq[] , int Answ[]){
        for(int i = 0 ; i < 26 ; i++){
            if(freq[i] != Answ[i]){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int freq[26] = {0};
        for(int i = 0 ; i < p.length() ; i++){
            freq[p[i] - 'a']++;
        }

        int  WindowSize = p.length();
        for(int i = 0 ; i < s.length() ; i++){
            int Ans[26] = {0};
            int WindowIndex = 0; int indx = i;
            while(WindowIndex < WindowSize && indx < s.length()){
                Ans[s[indx] - 'a']++;
                WindowIndex++;indx++;
            }
            if(IsValid(freq , Ans)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};