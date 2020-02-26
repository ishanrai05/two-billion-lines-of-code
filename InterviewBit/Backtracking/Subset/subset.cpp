void solve(vector<vector<int>> &ans, vector<int> &nums, vector<int> &temp, int i){
    if (i==nums.size()) ans.push_back(temp);
    else{
        temp.push_back(nums[i]);
        solve(ans, nums, temp, i+1);
        temp.pop_back();
        solve(ans,nums,temp,i+1);
    }
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<vector<int>> ans;
    vector<int> temp={};
    solve(ans,A,temp,0);
    sort(ans.begin(),ans.end());
    return ans;
}
