class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int i : nums){
            if (seen.count(i)){
                return true;
            }
            seen.insert(i);
        }
        return false;
    }
};