class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0 ; i < m ; i++){
                nums2.push_back(nums1[i]);
        }
        sort(nums2.begin() , nums2.end());
        int indx = 0;
        for(int i = 0 ; i < m+n ; i++){
            nums1[indx] =  nums2[i];
            indx++;
        }
    }
};