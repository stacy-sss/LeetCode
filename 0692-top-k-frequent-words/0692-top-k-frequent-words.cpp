class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        std::map<std::string, int> m;
        for(auto& s : words){
            m[s]++;
        }
        std::vector<std::vector<std::string>> v(words.size() + 1);
        for(auto& [s, f] : m){
            v[f].push_back(s);
        }
        std::vector<std::string> res;
        for(int i = v.size() -1; i>0; i--){
            for(auto& s : v[i]){
                if(res.size() == k){
                    return res;
                }
                res.push_back(s);
            }
        }
        return res;
    }
};