int Solution::removeDuplicates(vector<int> &A) {
    int n = A.size(), i, j=0;
    if (n<=1){ return 1;}
    for (i=0;i<n;i++){
        if (A[i]!=A[j]) {
            j+=1;
            A[j]=A[i];
            
        }
        
    }
    return j+1;
}