vector<int> Solution::dNums(vector<int> &A, int B) {
    // list<pair<int,unordered_map<int,int>::iterator>;
    int n=A.size();
    if (B>n) return {};
    unordered_map<int,int> mp;
    for (int i=0;i<B;i++) mp[A[i]]++;
    vector<int> ans;
    ans.push_back(mp.size());
    int k=0;
    for (int i=B;i<n;i++,k++){
        mp[A[i]]++;
        if (mp[A[k]]>1) mp[A[k]]--;
        else mp.erase(A[k]);
        ans.push_back(mp.size());
    }
    return ans;
}
