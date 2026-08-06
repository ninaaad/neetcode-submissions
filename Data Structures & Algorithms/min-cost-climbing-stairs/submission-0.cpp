class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int prv2 = 0;
        int prv = 0;

        for (int i = 2; i <= cost.size(); i++){

            int curi = min(cost[i-1] + prv, cost[i-2] + prv2);
            prv2 = prv;
            prv = curi;
        }

        return prv;
    }
};
