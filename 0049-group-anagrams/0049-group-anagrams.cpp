class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       std::unordered_map<std::string, std::vector<std::string>> m;
       for(auto s : strs){
        string original = s;
        std::sort(s.begin(), s.end());
        string new_str = s;
        m[new_str].push_back(original);
       }
       std::vector<vector<string>> res;
       for(const auto v : m){
        res.push_back(v.second);
       }
       return res;
    }
};