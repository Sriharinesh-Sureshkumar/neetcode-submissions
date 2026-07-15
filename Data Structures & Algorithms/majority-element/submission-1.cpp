class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate, c = 0;
        for (int n : nums){
            if (c == 0){
                candidate = n;
            }
            if (n == candidate){
                c++;
            }
            else{
                c--;
            }
        }
        return candidate;
    }
};