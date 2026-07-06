class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(int i = 0; i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                c.push(s[i]);
            }else{
                if(c.empty()){
                    return false;
                }
            
            char top = c.top();
            if((s[i] == ')' && top != '(') ||
                (s[i] == '}' && top != '{') ||
                (s[i] == ']' && top != '[')){
                return false;
            }
            c.pop();
            }
        }
        return c.empty();
    }
};