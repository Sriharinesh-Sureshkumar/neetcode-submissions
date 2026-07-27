class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0, w1n = word1.size(), w2n = word2.size();
        string ans;
        while (i < w1n && j < w2n){
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
            i++;
            j++;
        }
        ans += word1.substr(i);
        ans += word2.substr(j);
        return ans;
    }
};