class Solution {
public:
    string sortSentence(string s) {
        int sz = 0;
        for (char ch : s) {
            if ('0' <= ch && ch <= '9') {
                sz = max(sz, ch - '0');
            }
        }
        string res[sz];
        string word = "";
        for (char ch : s) {
            if ('0' <= ch && ch <= '9') {
                res[ch-'0'-1] = word;
                word = "";
            } else if (ch != ' ') {
                word += ch;
            }
        }
        string ans = "";
        for (int i = 0; i < sz; i++) {
            ans += res[i];
            if (i < sz - 1) {
                ans += " ";
            }
        }
        return ans;
    }
};
