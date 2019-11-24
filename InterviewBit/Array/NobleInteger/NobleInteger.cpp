int Solution::solve(vector<int> &A) {
    int size = A.size();
    sort(A.begin(), A.end());
    for (int i=0;i<size;i++){
        if (i<size-1&&A[i]==A[i+1]) continue;
        if (A[i]==size-1-i) return 1;
    }
    return -1;
}
