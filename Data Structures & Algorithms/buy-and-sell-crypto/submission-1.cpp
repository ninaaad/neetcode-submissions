class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf = 0, minPrice = prices[0];

        for (int price : prices){
            minPrice = min(minPrice, price);
            int prof = price - minPrice;
            maxProf = max(maxProf, prof);
        }

        return maxProf;
    }
};
