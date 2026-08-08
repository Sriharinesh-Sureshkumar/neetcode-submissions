class Solution {
public:
    void msort(vector<int>& nums, vector<int>& t, int low, int high){
        if (low >= high) return;
        int mid = low + (high - low) / 2;
        msort(nums, t, low, mid);
        msort(nums, t, mid + 1, high);
        if (nums[mid] <= nums[mid + 1]) return;
        merge(nums, t, low, mid, high);
    }
    void merge(vector<int>& nums, vector<int>& t, int low, int mid, int high){
        int left = low, k = low, right = mid + 1;
        while (left <= mid && right <= high){
            if (nums[left] <= nums[right]){
                t[k] = nums[left];
                left++;
            }
            else{
                t[k] = nums[right];
                right++;
            }
            k++;
        }
        while (left <= mid){
            t[k] = nums[left];
            left++;
            k++;
        }
        while (right <= high){
            t[k] = nums[right];
            right++;
            k++;
        }
        for (int i = low ; i <= high ; i++){
            nums[i] = t[i];
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int> t(nums.size());
        msort(nums, t, 0, nums.size() - 1);
        return nums;
    }
};