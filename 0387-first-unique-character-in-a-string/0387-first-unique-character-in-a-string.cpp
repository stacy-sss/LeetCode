class Solution {
public:
    int firstUniqChar(string s) {
        std::unordered_map<char, int> m;
        for(const auto& c : s){
            m[c]++;
        }
        
        for(int i = 0; i<s.size(); i++){
            if(m[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};