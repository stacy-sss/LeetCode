class Solution {
public:
    int reverse(int x) {
        std::string num = std::to_string(x);
        int l =0;
        int r = num.size()-1;
        while(l<r){
            if(num[l]=='-'){
                l++;
            }
            std::swap(num[l],num[r]);
            l++;
            r--;
        }
        try {
            int result = std::stoi(num); // stoi выбросит исключение при переполнении
            return result;
        } catch (...) {
            return 0; // по условию LeetCode — вернуть 0 при переполнении
        }
    }
};