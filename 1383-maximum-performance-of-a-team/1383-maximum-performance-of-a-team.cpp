class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        const int MOD = 1e9 + 7;
        vector<pair<int,int>> cand;
        for(int i=0; i<n;i++){
            cand.push_back({efficiency[i], speed[i]});
        }
        sort(cand.begin(), cand.end(), [](auto& a, auto& b){
            return a.first>b.first;
        });
        priority_queue<int,  vector<int>, greater<int>> pq;
        long long sumSpeed =0;
        long long maxx =0;
        for(auto& [eff, sp] : cand){
            pq.push(sp);
            sumSpeed+=sp;
            if((int)pq.size()>k){
                sumSpeed-= pq.top();
                pq.pop();
            }
            maxx = max(maxx, sumSpeed * eff);
        }
        return maxx % MOD;
    }
};