class Solution {
public:
    bool isTrue(const string& s, int left, int right){
        while(left<right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        for(int i=n; i>=1;i--){
            for(int j =0; j+i-1<n;j++){
                int c = j+i-1;
                if(isTrue(s,j,c)){
                    return s.substr(j,i);
                }
            }
        }
        return "";
    }
};