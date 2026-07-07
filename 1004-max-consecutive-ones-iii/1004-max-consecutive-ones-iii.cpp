class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int sumz =0;
        int len = 0;
        for(int r = 0; r<nums.size(); r++){
            if(nums[r] == 0){
                sumz++;
            }
            while(sumz>k){
                if(nums[l] == 0){
                    sumz--;
                }
                l++;
            }
            len = max(len, r-l+1);
        }
        return len;
    }
};