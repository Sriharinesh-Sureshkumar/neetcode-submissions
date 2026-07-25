class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size(), left = 0, right = n - 1;
        while (left <= right){
            while (left <= right and !isalnum(s[left])){
                left++;
            }
            while (left <= right and !isalnum(s[right])){
                right--;
            }
            if (left > right){
                break;
            }
            if (tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
