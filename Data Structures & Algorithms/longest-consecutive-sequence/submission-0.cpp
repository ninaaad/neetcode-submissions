class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLength = 0;
        unordered_set<int> s;
        for (int num : nums){
            s.insert(num);
        }

        for (int x : s){
            if (!s.contains(x - 1)){
                int curr = x;
                int length = 0;

                while (s.contains(curr)){
                    curr++;
                    length++;
                }

                maxLength = max(maxLength, length);
            }
        }

        return maxLength;
    }
};
