class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;

        vector<int> need(26,0);
        vector<int> wind(26,0);
        for(auto& c : s1){
            need[c-'a']++;
        }
        int l = 0;
        for(int r = 0; r<s2.size(); r++){
            wind[s2[r]-'a']++;
            if(r-l+1>s1.size()){
                wind[s2[l]-'a']--;
                l++;
            }
            if(need == wind){
                return true;
            }
        }
        return false;
    }
};