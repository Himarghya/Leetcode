class Solution {
public:
    bool Isavailable(int freq[] ,int freq2[]){
        for(int i = 0 ; i<26 ; i++){
            if(freq[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i =0; i< s1.length() ; i++){
            freq[s1[i] - 'a']++;
        }

        int windowSize = s1.length();
        for(int i = 0 ; i<s2.length() ; i++){
            int WindowIndex = 0 , indx = i;
            int freq2[26] = {0};
            while(WindowIndex < windowSize && indx < s2.length()){
                freq2[s2[indx] - 'a']++;
                indx++;WindowIndex++;
            }
            if(Isavailable(freq , freq2)){
                return true;
            }
        }
        return false;
        
    }
};