int Solution::nTriang(vector<int> &A){
    int n = A.size(), left, right;
    sort(A.begin(),A.end());
    int count = 0;
    for (int i=n-1;i>=2;i--){
        left = 0;
        right = i-1;
        while(left<right){
            if (A[i]<A[left]+A[right]) {
                count+=right-left;
                count %= 1000000007;
                right--;
            }
            else left++;
        }
    }
    return count;
}
