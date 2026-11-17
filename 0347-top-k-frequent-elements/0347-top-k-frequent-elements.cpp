class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int,int> m;
        std::vector<std::vector<int>> bucket(nums.size() +1);
        for(const auto& n : nums){
            m[n]++;
        }
        std::vector<int> res;
        for(auto [k,v] : m){
            bucket[v].push_back(k);
        }
        for(int i = bucket.size()-1; i>=0;i--){
            if(res.size() == k){
                return res;
            }
            for (int num : bucket[i]) {
                res.push_back(num);
            }
        }
        return res;
    }
};