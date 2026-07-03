class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        res.insert(res.begin(), nums1.begin(), nums1.end());
        res.insert(res.begin(), nums2.begin(), nums2.end());

        sort(res.begin(), res.end());
        int n = res.size();
        if(n%2 == 1){
            return res[n/2];
        }else{
            return (res[n/2] + res[n/2 - 1])/ 2.0;
        }
    }
};