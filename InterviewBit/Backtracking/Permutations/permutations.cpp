void solve(vector<vector<int>> &ans, vector<int> &nums, vector<int> &temp, vector<int> &){
    if (nums.size()==0) ans.push_back(temp);
    for (int i=0;i<nums.size();i++){
        int n=nums[i];
        nums.erase(nums.begin()+i);
        temp.push_back(n);
        solve(ans,nums,temp);
        temp.pop_back();
        nums.insert(nums.begin()+i,n);
    }
}
vector<vector<int> > Solution::permute(vector<int> &nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    solve(ans,nums,temp);
    return ans;
}
