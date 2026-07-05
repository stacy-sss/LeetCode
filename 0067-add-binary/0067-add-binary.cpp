class Solution {
public:
    string addBinary(string a, string b) {
        while (a.size() < b.size()) a = "0" + a;
        while (b.size() < a.size()) b = "0" + b;
        
        int carry = 0;
        
        for (int i = a.size() - 1; i >= 0; i--) {
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            a[i] = char('0' + sum % 2);
            carry = sum / 2;
        }
        
        if (carry) a = "1" + a;
        return a;
    }
};