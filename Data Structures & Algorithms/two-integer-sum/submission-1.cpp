class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hmap;
        vector<int> res;

        for (int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if (hmap.find(complement) != hmap.end()){
                return {hmap[complement], i};
            }

            hmap[nums[i]] = i;
        }

        return {};
    }
};
