class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0, n = nums.size();
        while (i < n){
            int idx = nums[i] - 1;
            if (1 <= nums[i] && nums[i] <= n && nums[i] != nums[idx]){
                swap(nums[idx], nums[i]);
            }
            else{
                i++;
            }
        }
        for (int j = 0 ; j < n ; j++){
            if (nums[j] != j + 1){
                return j + 1;
            }
        }
        return n + 1;
    }
};