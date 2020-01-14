class Solution {
public:
    int minDistance(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        int dp[m+1][1001];
        for (int i=0;i<=m;i++){
            for (int j=0;j<=n;j++){
                if (i==0){
                    dp[i][j] = j;
                    continue;
                }
                else if (j==0){ 
                    dp[i][j] = i;
                    continue;
                }
                else if (text1[i-1]==text2[j-1]) {
                    dp[i][j] = dp[i-1][j-1];
                }
                else {
                    dp[i][j] = min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
                }
            }
        }
        return dp[m][n];
    }
};