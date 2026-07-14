class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int i : nums){
            if (freq.count(i)){
                return true;
            }
            freq[i] = 1;
        }
        return false;
    }
};