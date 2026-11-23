class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::unordered_map<int, int> m;
        for(auto& n : arr){
            m[n]++;
        }
        std::unordered_set<int> s;
        for(auto& [n,f] : m){
            s.insert(f);
        }
        if(m.size() == s.size()){
            return true;
        }
        return false;
    }
};