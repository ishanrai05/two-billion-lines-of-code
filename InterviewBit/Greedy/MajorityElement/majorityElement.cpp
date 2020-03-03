int Solution::majorityElement(const vector<int> &A) {
    int n=A.size();
    int a=A[0];
    int count_a=1;
    for (int i=1;i<n;i++){
        if (A[i]==a) count_a++;
        else if (count_a--==0){
            a=A[i];
            count_a=1;
        }
    }
    return a;
}
