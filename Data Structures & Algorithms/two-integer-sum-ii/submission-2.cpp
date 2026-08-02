class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i < j){
            int curr = numbers[i] + numbers[j];
            if (curr < target) 
                i++;
            else if (curr > target) 
                j--;
            else 
                return {i + 1, j + 1};
        }
        return {};
    }
};
