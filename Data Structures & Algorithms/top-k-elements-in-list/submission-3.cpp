class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for (int i = 0 ; i < n ; i++){
            if (freq.count(nums[i])){
                freq[nums[i]]++;
            }
            else{
                freq[nums[i]] = 1;
            }
        }
        vector<vector<int>> a(n);
        for (auto i : freq){
            a[i.second - 1].push_back(i.first);
        }
        vector<int> ans;
        for (int i = n - 1 ; i >= 0 ; i--){
            if (!a[i].empty()){
                for (int j : a[i]){
                    ans.push_back(j);
                    k--;
                }
            }
            if (k == 0){
                return ans;
            }
        }
        return ans;
    }
};
