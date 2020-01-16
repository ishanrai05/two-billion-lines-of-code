class Solution {
public:
    int solve(string &s, int i, int j, int (*dp)[1001]){
        if (dp[i][j]!=-1){return dp[i][j];}
        if (i>j){return 0;}
        if (i==j){return 1;}
        if (s[i]==s[j]){dp[i][j]=2+solve(s,i+1,j-1,dp);}
        else {dp[i][j] = max(solve(s,i+1,j,dp),solve(s,i,j-1,dp));}
        return dp[i][j];
    }
    int longestPalindromeSubseq(string s) {
        int dp[s.size()][1001];
        memset (dp,-1,sizeof(dp));
        return solve(s, 0, s.size()-1,dp);
    }
};