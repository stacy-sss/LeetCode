class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int,int> m;
        for(auto& n : nums){
            m[n]++;
        }
        std::vector<std::vector<int>> bucket(nums.size() + 1);
        for(auto& [num, f] : m){
            bucket[f].push_back(num);
        } 
        std::vector<int> res;
        for(int i = bucket.size()-1; i>0;i--){
            for(auto& n : bucket[i]){
                if (res.size() == k) {
                    return res;
                }
                res.push_back(n);
            }
        }
        return res;
    }
};