class Solution {
public:
    int lcs(string &text1, string &text2, int i, int j, vector<vector<int>> &dp){
        if (i==0||j==0) return 0;
        else if (dp[i-1][j-1]!=-1) return dp[i-1][j-1]; 
        else if (text1[i-1]==text2[j-1]){
            dp[i-1][j-1] = 1 + lcs(text1, text2, i-1, j-1, dp);
            return dp[i-1][j-1];
        }
        else{
            dp[i-1][j-1] = max(lcs(text1,text2,i-1,j,dp),lcs(text1,text2,i,j-1,dp));
            return dp[i-1][j-1];
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        vector<vector<int>> dp (m, vector<int>(n,-1));        
        int len = lcs(text1, text2, m, n, dp);
        return len;
    }
};