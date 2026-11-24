class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_map<int,int> m1;
        std::unordered_map<int,int> m2;
        for(auto& n : nums1){
            m1[n]++;
        }
        for(auto& n : nums2){
            m2[n]++;
        }
        std::vector<int> res;
        int count1 = 0;
        for(int i = 0; i<nums1.size(); i++){
            if(m2.find(nums1[i]) != m2.end()){
                count1++;
                
            }
        }
        res.push_back(count1);
        int count2 = 0;
        for(int i = 0; i<nums2.size(); i++){
            if(m1.find(nums2[i]) != m1.end()){
                count2++;
            }
        }
        res.push_back(count2);
        return res;
    }
};