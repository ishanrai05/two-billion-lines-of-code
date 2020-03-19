vector<vector<int>> temp;
void dfs(vector<int>v, vector<vector<int>>& dict, int node){
    if (node==0) {
        temp.push_back(v);
        return;
    }
    v.push_back(node);
    for (int nei:dict[node]){
        dfs(v,dict,nei);
    }
}
vector<string> Solution::wordBreak(string s, vector<string>& wordDict) {
    vector<string> ans;
    temp.clear();
    unordered_set<string> mp;
    int maxlen=0;
    int n=s.size();
    for (string str:wordDict){
        mp.insert(str);
        if (str.size()>maxlen) maxlen=str.size();
    }
    vector<int> dp(n+1,-1);
    vector<vector<int>> dict(n+1);
    dp[0]=0;
    for (int i=1;i<=n;i++){
        for (int j=i-1;j>=max(i-maxlen,0);j--){
            if (dp[j]>=0){
                string word=s.substr(j,i-j);
                if (mp.find(word)!=mp.end()){
                    dp[i]=j;
                    dict[i].push_back(j);
                }
            }
        }
    }
    if (dp[n]<0) return ans;
    dfs({},dict,n);
    for (auto x:temp) {
        reverse(x.begin(),x.end());
        int prev=0;
        string word="";
        for (int i:x){
            word+=s.substr(prev,i-prev);
            if (i!=n) word+=" ";
            prev=i;
        }
        ans.push_back(word);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
