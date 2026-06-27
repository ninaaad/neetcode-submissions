class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int area = 0, maxarea = 0;

        while ( l < heights.size() && r >= 0){
            area = min(heights[l], heights[r]) * (r-l);
            if (area > maxarea) maxarea = area;
            if (heights[l] <= heights[r]) l++;
            else r--;
        }

        return maxarea;
    }
};
