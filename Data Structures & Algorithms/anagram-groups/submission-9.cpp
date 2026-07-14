class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> d;
        for (string s : strs){
            vector<int> freq(26);
            for (char c : s){
                freq[c - 'a']++;
            }
            string key;
            for (int x : freq){
                key += '#' + to_string(x);
            }
            d[key].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto &i : d){
            ans.push_back(i.second);
        }
        return ans;
    }
};
