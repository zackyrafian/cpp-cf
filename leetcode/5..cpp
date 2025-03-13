class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0, maxLen = 0;

        
        auto expand = [&](int left, int right) {
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }
            return make_pair(left + 1, right - left - 1);
        };

        for (int i = 0; i < s.size(); i++) {
            auto [l1, len1] = expand(i, i);     
            auto [l2, len2] = expand(i, i + 1); 

            if (len1 > maxLen) {
                start = l1;
                maxLen = len1;
            }
            if (len2 > maxLen) {
                start = l2;
                maxLen = len2;
            }
        }
        
        return s.substr(start, maxLen);
    }
};
