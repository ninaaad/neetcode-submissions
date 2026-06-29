class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), maxarea = 0;
        vector<int> nse(n), psee(n);
        stack<int> st;

        for (int i = n-1; i >= 0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            nse[i] = st.empty() ? n:st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        for (int i = 0; i < n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            psee[i] = st.empty() ? -1:st.top();
            st.push(i);
        }

        for (int i = 0; i < n; i++){
            int curr = heights[i]*(nse[i] - psee[i] - 1);
            if (curr > maxarea) maxarea = curr;

        }

        return maxarea;
    }
};
