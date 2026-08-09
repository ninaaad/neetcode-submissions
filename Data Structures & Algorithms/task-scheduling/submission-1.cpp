class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26, 0);
        priority_queue<int> maxHeap;

        int cnt = 0;
        for (char c : tasks){
            mp[c - 'A']++;
        }
        for (int i : mp){
            if (i != 0) maxHeap.push(i);
        }
        while (!maxHeap.empty()){
            vector<int> temp;
            for (int i = 0; i <= n; i++){
                if (!maxHeap.empty()){
                    int t = maxHeap.top();
                    maxHeap.pop();
                    t--;
                    temp.push_back(t);
                }

            }
            for (int &t : temp){
                if (t > 0) maxHeap.push(t);
            }

            if (maxHeap.empty()){
                cnt += temp.size();
            }
            else cnt += n + 1;

        }

        return cnt;
    }
};
