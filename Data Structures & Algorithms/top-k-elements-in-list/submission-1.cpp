class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hmap;
        for (int i = 0; i < nums.size(); i++){
            hmap[nums[i]]++;
        }
        vector<int> ans;
        vector<vector<int>> bucket(nums.size() + 1);

        for (const auto& [key, value] : hmap){
            bucket[value].push_back(key);
        }

        for (int freq = bucket.size() - 1; freq >= 1; freq--){
            if (bucket[freq].empty()) continue;
            else {
                for (int num : bucket[freq]){
                    ans.push_back(num);
                    if (ans.size() == k) return ans;
                }
            }
        }

        return ans;
    }
};
