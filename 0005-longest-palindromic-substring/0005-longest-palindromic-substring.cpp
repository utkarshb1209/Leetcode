class Solution {
private:
    int dp[1001][1001];
    
    bool isPalindrome(string &s, int a, int b) {
        if (a >= b)
            return true;
        if (dp[a][b] != -1)
            return dp[a][b];
        return dp[a][b] = (s[a] == s[b] && isPalindrome(s, a + 1, b - 1));
    }
    
public:    
    string longestPalindrome(string s) {
        memset(dp, -1, sizeof(dp));
        int size = s.size();
        for (int len = size; len >= 1; len--) { // length of substring
			for (int start = 0; start <= size - len; start++) { // starting index of substring
                int end = start + len - 1;
				if (isPalindrome(s, start, end)) {
					return s.substr(start, len);
                }
            }
        }
        return "";
    }
};