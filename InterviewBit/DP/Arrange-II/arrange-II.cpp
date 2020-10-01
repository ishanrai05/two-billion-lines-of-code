int Solution::arrange(string A, int k) {
    int n=A.size();
    if (k>n) return -1;
    if (k==n) return 0;
    vector<int> whites_so_far(n,0);
    vector<int> blacks_so_far(n,0);
    if (A[0]=='W') whites_so_far[0]=1;
    else blacks_so_far[0]=1;
    for (int i=1;i<n;i++){
        whites_so_far[i]=whites_so_far[i-1];
        blacks_so_far[i]=blacks_so_far[i-1];
        if (A[i]=='W') whites_so_far[i]++;
        else blacks_so_far[i]++;
    }
    vector<int> dp(n,0);
    for (int i=1;i<n;i++){
        dp[i]=whites_so_far[i]*blacks_so_far[i];
    }
    for (int i=1;i<k;i++){
    	vector<int> temp=dp;
        for (int j=i;j<n;j++){
            temp[j]=dp[j-1];
            for (int l=j-2;l>=i-1;l--){
                int t=((blacks_so_far[j]-blacks_so_far[l])*(whites_so_far[j]-whites_so_far[l]))+dp[l];
                temp[j]=min(temp[j],t);
            }
        }
        dp=temp;
    }
    return dp.back();
}
