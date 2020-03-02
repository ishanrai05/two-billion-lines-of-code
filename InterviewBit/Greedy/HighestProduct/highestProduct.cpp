int Solution::maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    int a=A[0], b=A[1];
    int n = A.size()-1;
    int x=A[n], y=A[n-1],z=A[n-2];
    int ans = max(a*b*x,x*y*z);
    return ans;
}
