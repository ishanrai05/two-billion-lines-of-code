vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>> res;
    vector<int> triplet;
    vector<int> temp;
    map<vector<int>, bool> present;
    sort(A.begin(),A.end());
    int left, right, n=A.size(), sum;
    for (int i=0;i<n-2;i++){
        if (A[i]>0) break;
        left = i+1;
        right = n-1;
        while(left<right){
            sum = A[i] + A[left]+A[right];
            if (sum==0){
                triplet.push_back(A[i]);
                triplet.push_back(A[left]);
                triplet.push_back(A[right]);
                if (present.find(triplet)==present.end()) {
                    res.push_back(triplet);
                    present[triplet]=true;
                }
                triplet.clear();
            }
            if (sum>0) right --;
            else left++;
        }
    }
    return res;
}
