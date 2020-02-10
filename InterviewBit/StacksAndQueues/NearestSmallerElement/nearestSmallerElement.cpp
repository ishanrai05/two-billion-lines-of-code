vector<int> Solution::prevSmaller(vector<int> &A) {
    int n = A.size();
    vector <int> v(n);
    v[0] = A[0];
    vector <int> idx;
    idx.push_back(0);
    for (int i=1;i<n;i++){
        if (A[i]>v[i-1]) v[i]=v[i-1];
        else{
            idx.push_back(i);
            v[i]=A[i];
        }
    }
    for (int i:idx) v[i]=-1;
    return v;
}
