class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1 ; i < n ; i ++){
            int ele = nums[i], j = i - 1;
            while (j >= 0 && nums[j] > ele){
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = ele;
        }
        return nums;
    }
};