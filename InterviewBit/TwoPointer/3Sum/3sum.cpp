int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int sum, ans, left, right, n=A.size();
    int diff, min_diff = INT_MAX;
    for (int i=0;i<n-2;i++){
        left = i+1;
        right = n-1;
        while(left<right){
            sum = A[i]+A[left]+A[right];
            diff = abs(sum-B);
            if (sum==B) return sum;
            if (diff<min_diff){
                min_diff = diff;
                ans = sum;
            }
            if (sum<B) left++;
            else right--;
        }
    }
    return ans;
}
