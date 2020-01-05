int Solution::maxArea(vector<int> &A) {
    if (A.size()<=1) return 0;
    int left=0, right=A.size()-1;
    int ans = INT_MIN;
    while(left<right){
        ans = max(ans,(right-left)*min(A[left],A[right]));
        if (A[left]<A[right]) left++;
        else right--;
    }
    return ans;
}
