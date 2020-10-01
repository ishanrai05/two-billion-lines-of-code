int Solution::solve(vector<int> &prices, int k) {
    if (prices.size()<=1 || k==0) return 0;
    if (k>=prices.size()/2){
        int ans=0;
        for (int i=1;i<prices.size();i++){
            if (prices[i]>prices[i-1]) ans+=prices[i]-prices[i-1];
        }
        return ans;
    }
    int m=prices.size();
    vector<int> dp(m,0);
    for (int i=1;i<=k;i++){
        vector<int> temp(m);
        for (int j=1;j<m;j++){
            int maxans=temp[j-1];
            for (int k=j-1;k>=0;k--){
                maxans=max(maxans,prices[j]-prices[k]+dp[k]);
            }
            temp[j]=maxans;
        }
        dp=temp;
    }
    return dp.back();
    
}
