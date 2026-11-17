class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> m1;
        std::unordered_map<char, int> m2;
        for(const auto& c : s){
            m1[c]++;
        }
        for(const auto& c : t){
            m2[c]++;
        }
        if(m1 == m2){
            return true;
        }
        return false;
    }
};