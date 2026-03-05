class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0, maxLen = 1;

        for (int i = 0; i < s.length(); i++) {
            int l = i, r = i;
            while (r + 1 < s.length() && s[r + 1] == s[l]) {
                r++;
            }
            i = r;

            while (l > 0 && r + 1 < s.length() && s[l - 1] == s[r + 1]) {
                l--;
                r++;
            }

            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
        }

        return s.substr(start, maxLen);
    }
    
};