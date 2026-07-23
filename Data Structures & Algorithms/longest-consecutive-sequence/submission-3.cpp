class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int cnt = 0;
        for (int i : s){
            if (!s.count(i - 1)){
                int x = i;
                int c = 1;
                while (s.count(x + 1)){
                    c++;
                    x++;
                }
                cnt = max(cnt, c);
            }
        }
        return cnt;
    }
};
