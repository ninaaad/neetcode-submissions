class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), maxarea = 0;
        stack<int> st;

        for (int i = 0; i < n; i++){
            while (!st.empty() && heights[st.top()] > heights[i]){
                int elem = st.top();
                st.pop();
                int nse = i, pse = st.empty() ? -1:st.top();
                maxarea = max(maxarea, heights[elem]*(nse - pse - 1));
            }
            st.push(i);
        }
        while (!st.empty()){
            int nse = n, elem = st.top();
            st.pop();
            int pse = st.empty() ? -1:st.top();
            maxarea = max(maxarea, heights[elem]*(nse - pse - 1));
        }

        return maxarea;
    }
};
