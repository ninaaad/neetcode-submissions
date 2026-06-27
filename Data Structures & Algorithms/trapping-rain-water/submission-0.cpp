class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, lmax = 0, r = height.size() - 1, rmax = 0, total = 0;
        while (l < r) {
            if (height[l] > lmax) lmax = height[l];
            if (height[r] > rmax) rmax = height[r];

            total += min(lmax, rmax) - min(height[l], height[r]);
            if (height[l] < height[r]) l++;
            else r--;
        }

        return total;

    }
};
