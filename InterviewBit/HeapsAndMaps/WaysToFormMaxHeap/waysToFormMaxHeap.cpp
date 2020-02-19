#define ll long long int
ll MOD = 1000000007;
vector<ll>DP;
// vector<vector<int>>NCK;
ll getLeft(ll l, vector<ll>&log_2){
    if (l==1) return 0;
    // int h = (int)log2(l);
    ll h = log_2[l];
    ll num_h = 1<<h;
    ll last = l-(num_h-1);
    if (last>=num_h/2) return num_h-1;
    return (num_h-1-(num_h/2)+last/2);
}
ll choose(ll n, ll k, vector<vector<ll>> &NCK){
    if (k>n) return 0;
    if (k==n||k==0||n<=1) return 1;
    if (NCK[n][k]!=-1) return NCK[n][k];
    ll ans = choose(n-1,k-1,NCK)+choose(n-1,k,NCK);
    ans=ans%MOD;
    NCK[n][k]=ans;
    return ans;
    
}
ll numOfHeaps(ll n, vector<vector <ll>> &NCK, vector<ll>&log_2){
    if (n<=1) return 1;
    if (DP[n]!=-1) return DP[n];
    ll left = getLeft(n,log_2);
    ll ans = ((choose(n-1,left,NCK))*(numOfHeaps(left,NCK,log_2))%MOD*(numOfHeaps(n-left-1,NCK,log_2)));
    ans=ans%MOD;
    DP[n]=ans;
    return ans;
}
int Solution::solve(int n) {
    // int DP[n];
    // memset(DP,-1,sizeof(DP));
    for (int i=0;i<=n+1;i++) DP.push_back(-1);
    vector<vector<ll>>NCK(n,vector<ll>(n,-1));
    ll currLog2 = -1; 
    int currPower2 = 1; 
    vector<ll> log_2(n+1);
    // for each power of two find logarithm 
    for (int i = 1; i <= n; i++) { 
        if (currPower2 == i) { 
            currLog2++; 
            currPower2 *= 2; 
        } 
        log_2[i] = currLog2; 
    } 
    ll ans=numOfHeaps(n,NCK,log_2)%MOD;
    return (int)ans;
}
