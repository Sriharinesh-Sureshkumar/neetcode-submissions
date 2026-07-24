class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int can1 = nums[0], can2 = nums[0], c1 = 0, c2 = 0;
        for (int n : nums){
            if (can1 == n){
                c1 += 1;
            }
            else if (can2 == n){
                c2 += 1;
            }
            else if (c1 == 0){
                can1 = n;
                c1++;
            }
            else if (c2 == 0){
                can2 = n;
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        int cnt1 = 0, cnt2 = 0, n = nums.size() / 3;
        vector<int> ans;
        for (int i : nums){
            if (can1 == i){
                cnt1++;
            }
            else if (can2 == i){
                cnt2++;
            }
        }
        if (cnt1 > n){
            ans.push_back(can1);
        }
        if (cnt2 > n){
            ans.push_back(can2);
        }
        return ans;
    }
};