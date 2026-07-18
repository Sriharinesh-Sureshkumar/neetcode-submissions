class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for (string &word : strs) {
            ans += to_string(word.size()) + "#" + word;
        }
        return ans;
        }

    vector<string> decode(string s) {
        int i = 0, n = s.size();
        vector<string> ans;
        while (i < n){
            int j = s.find('#', i);
            int k = stoi(s.substr(i, j - i));
            i = j + 1;
            ans.push_back(s.substr(i, k));
            i += k;
        }
        return ans;
    }
};
