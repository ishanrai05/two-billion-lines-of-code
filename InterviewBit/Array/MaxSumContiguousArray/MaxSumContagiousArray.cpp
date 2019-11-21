int Solution::maxSubArray(const vector<int> &A) {
    int m = A.size();
    int max=INT_MIN;
    int current_sum=0;
    for (int i=0;i<m;i++){
        // cout<<sum<<endl;
        current_sum += A[i];
        if (current_sum>max) max=current_sum;
        if(current_sum<0) current_sum=0;
    }

return max;
}
