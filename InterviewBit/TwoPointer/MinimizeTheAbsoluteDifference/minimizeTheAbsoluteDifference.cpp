int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int ans=INT_MAX;
    int i = A.size()-1, j=B.size()-1, k=C.size()-1;
    while(i>=0 and j>=0 and k>=0){
        int max_e = max(A[i], max(B[j], C[k]));
        int min_e = min(A[i], min(B[j], C[k]));
        ans = min(ans, max_e-min_e);
        if (A[i]==max_e) i--;
        else if (B[j]==max_e) j--;
        else if (C[k]==max_e)k--;
    }
    return ans;
}
