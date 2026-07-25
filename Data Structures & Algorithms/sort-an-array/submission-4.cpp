class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0 ; i < n ; i++){
            int min_ele = nums[i], idx = i;
            for (int j = i + 1 ; j < n ; j++){
                if (min_ele > nums[j]){
                    min_ele = nums[j];
                    idx = j;
                }
            }
            if (idx != i){
                swap(nums[i], nums[idx]);
            }
        }
        return nums;
    }
};