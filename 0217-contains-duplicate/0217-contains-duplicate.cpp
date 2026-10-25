class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> res;
        for(const auto& i : nums){
            res.insert(i);
        }
        if(res.size() < nums.size()){
            return true;
        }
        return false;
    }
};