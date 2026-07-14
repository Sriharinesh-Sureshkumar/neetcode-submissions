class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> m;
        for (string s : strs){
            vector<int> frq(26 , 0);
            for (char c : s){
                frq[c - 'a']++;
            }
            string key = "";
            for (int i : frq){
                key += "#" + to_string(i);
            }
            m[key].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
