class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        stack<tuple<string,int,int>> s;
        s.push({"", 0,0});
        while(!s.empty()){
            auto [cur, open, close] = s.top();
            s.pop();
            if(open == n && close == n){
                res.push_back(cur);
                continue;
            }
            if(open<n){
                s.push({cur + "(", open + 1, close});
            }
            if(close<open){
                s.push({cur + ")", open, close + 1});
            }
        }
        return res;
    }
};