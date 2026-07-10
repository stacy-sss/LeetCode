class Solution {
public:
    string convert(string s, int numRows) {
        std::vector<std::string> v (numRows, "");
        if(numRows <= 1){
            return s;
        }
        int j = 0;
        int dir = -1;
        for(int i = 0; i<s.length();i++){
            if(j == numRows - 1 || j == 0){
                dir *= (-1);
            }
            v[j] += s[i];
            if(dir ==1){
                j++;
            }else{
                j--;
            }
        }
        std::string res;
        for(auto& c : v){
            res += c;
        }
        return res;
    }
};