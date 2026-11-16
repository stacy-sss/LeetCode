class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> s;
        for(const auto& c : nums){
            s.insert(c);
        }
        if(s.size() == nums.size()){
            return false;
        }else{
            return true;
        }
    }
};