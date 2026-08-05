class Solution {
public:
    int climbStairs(int n) {
        int prv2 = 0;
        int prv = 1;

        while (n--){
            int curi = prv + prv2;
            prv2 = prv;
            prv = curi;
        }

        return prv;
    }
};
