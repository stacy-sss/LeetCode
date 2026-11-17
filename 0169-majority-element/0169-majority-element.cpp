class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        std::unordered_map<int,int> m;
        for(const auto& c : nums){
            m[c]++;
        }
        int h = n /2;
        for(auto [k,v] : m){
            if(v > h){
                return k;
            }
        }
    return 0;
    }
};