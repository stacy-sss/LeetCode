class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> m;
        for(const auto& n : nums){
            m[n]++;
        }
        int max = nums.size() / 2;
        int res = 0;
        for(auto [n, c] : m){
            if(c >= max){
                max = c;
                res = n;
            }
        }
        return res;
    }
};