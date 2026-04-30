class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> box;
        for (int i = 0; i < nums.size(); i++) {
            if (box.count(nums[i])) {
                return true;
            }
            box.insert(nums[i]);
        }
        return false;
    }
};