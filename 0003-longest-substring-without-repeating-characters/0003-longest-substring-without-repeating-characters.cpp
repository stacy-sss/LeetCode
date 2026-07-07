class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l = 0;
        int lenmax = 0;
        for(int r =0; r<s.size();r++){
            while(st.find(s[r]) != st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            lenmax = max(lenmax, r-l+1);
        }
        return lenmax;
    }
};