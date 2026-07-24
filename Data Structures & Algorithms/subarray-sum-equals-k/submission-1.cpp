class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> pre_sum;
        pre_sum[0] = 1;
        int cnt = 0, psum = 0;
        for (int n : nums){
            psum += n;
            cnt += pre_sum[psum - k];
            pre_sum[psum]++;
        }
        return cnt;
    }
};