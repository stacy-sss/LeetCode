class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.size()<p.size()) return res;
        vector<int> need(26, 0);
        vector<int> wind(26,0);
        for(auto& c : p){
            need[c-'a']++;
        }
        int l = 0;
        for(int r = 0; r< s.size(); r++){
            wind[s[r]-'a']++;
            if(r-l+1>p.size()){
                wind[s[l]-'a']--;
                l++;
            }
            if(wind==need){
                res.push_back(l);
            }
        }
        return res;
    }
};