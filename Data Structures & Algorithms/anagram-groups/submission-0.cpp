class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hmap;
        vector<vector<string>> res;

        for (int i = 0; i < strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            hmap[key].push_back(strs[i]);
        }

        for (const auto& [key, value] : hmap) res.push_back(value);

        return res;
    }
};
