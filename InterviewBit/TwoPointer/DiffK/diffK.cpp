int Solution::diffPossible(vector<int> &A, int B) {
    int i=0, j=0, n=A.size(), diff;
    while(i<n && j<n){
        diff =A[j]-A[i]; 
        if (diff==B && j!=i) return 1;
        else if (diff<=B) j++;
        else if (diff>=B) i++;
    }
    return 0;
}
