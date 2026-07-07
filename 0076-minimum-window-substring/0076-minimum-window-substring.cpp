class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,  int> m;
        for(auto& c : t){
            m[c]++;
        }
        int l = 0;
        int have = 0;//сколько уникальных символов собранно
        int req = m.size(); //сколько символов нужно
        int len = INT_MAX;
        int start = 0;

        unordered_map<char, int> wind;
        for(int r = 0; r<s.size();r++){
            char c = s[r];
            wind[c]++;
            if(m.count(c) && wind[c] == m[c]){
                have++;
            }
            while(have == req){
                int curlen = r - l + 1;
                if(curlen < len){
                    len = curlen;
                    start = l;
                }
                char lchar = s[l];
                wind[lchar]--;
                if(m.count(lchar) && wind[lchar] < m[lchar]){
                    have--;
                }
                l++;
            }
        }
        if(len == INT_MAX){
            return "";
        }else{
            return s.substr(start, len);
        }
    }
};