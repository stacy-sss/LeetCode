class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       std::unordered_map<int,int> m;
       for(int i = 0; i<nums.size(); i++){
        int c = target - nums[i];
        if(m.find(c) != m.end()){
            return {i, m[c]};
        }
        m[nums[i]] = i;
       }
       return {};
    }
};
