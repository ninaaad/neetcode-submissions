class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hmap;
        for (int i = 0; i < nums.size(); i++){
            if (hmap.contains(nums[i])) return true;
            hmap[nums[i]];
        }

        return false;
    }
};