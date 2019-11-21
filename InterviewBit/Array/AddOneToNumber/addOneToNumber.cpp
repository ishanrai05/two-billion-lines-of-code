vector<int> Solution::plusOne(vector<int> &A) {
    A.insert(A.begin(),0);
    A[A.size()-1]++;
    for(int i=A.size()-1; i>=0; i--){
        if(A[i]>9) A[i]%=10, A[i-1]++;
    }
    while(A[0]==0) A.erase(A.begin());
    return A;
}