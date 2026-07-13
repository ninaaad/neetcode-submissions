class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hmap;
        for (int i = 0; i < nums.size(); i++){
            hmap[nums[i]]++;
        }
        vector<int> ans;
        priority_queue<pair<int, int>> pq;
        for (const auto& [key, value] : hmap){
            pq.push({value, key});
        }

        while (k > 0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }

        return ans;
    }
};
