class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n, 1);
        vector<int> suff(n, 1);

        for (int i = 1; i < n; i++){
            pref[i] = nums[i-1]*pref[i-1];
            suff[n-i-1] = nums[n-i]*suff[n-i];
        }
        vector<int> ans;
        for (int i = 0; i < n; i++){
            ans.push_back(pref[i]*suff[i]);
        }

        return ans;
    }
};
