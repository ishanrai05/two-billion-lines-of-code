int Solution::removeDuplicates(vector<int> &A) {
    int n=A.size(),i=2,j=2;
    if (n<=2) return n;
    for (i=2;i<n;i++){
        if ((A[j-1]!=A[i])||(A[j-2]!=A[i])){
            A[j]=A[i];
            j++;
        }
    }
    return j;
}
