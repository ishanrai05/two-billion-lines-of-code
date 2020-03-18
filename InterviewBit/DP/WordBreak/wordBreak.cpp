int Solution::wordBreak(string s, vector<string> &wordDict) {
    int n=s.size();
    unordered_set<string> mp;
    int maxlen=0;
    for (string str:wordDict) {
        mp.insert(str);
        if (str.size()>maxlen)
            maxlen=str.size();
    }
    vector<bool> dp(n+1,false);
    dp[0]=true;
    for (int i=1;i<=n;i++){
        for (int j=i-1;j>=max(0,i-maxlen);j--){
            if (dp[j]){
                string word=s.substr(j,i-j);
                if (mp.find(word)!=mp.end()){
                    dp[i]=true;
                    break;
                }
            }
        }
    }
    return dp[n];
}
