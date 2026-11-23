class Solution {
public:
    string frequencySort(string s) {
        std::map<char, int> m;
        for(auto& c : s){
            m[c]++;
        }
        std::vector<std::vector<char>> v(s.size() + 1);
        for(auto& [c,f] : m){
            v[f].push_back(c);
        }
        std::string res;
        for(int i = v.size() - 1; i>0; i--){
            for(auto& c : v[i]){
                res.append(i,c);
            }
        }
        return res;
    }
};