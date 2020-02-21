void solve (vector<vector<int>>&ans,vector<int>&nums,vector<int>&temp,int &k, int i){
    if (temp.size()==k){
        ans.push_back(temp);
    }
    else if(i<nums.size()){
        temp.push_back(nums[i]);
        solve(ans,nums,temp,k,i+1);
        temp.pop_back();
        solve(ans,nums,temp,k,i+1);
    }
}
vector<vector<int>> Solution::combine(int n, int k) {
    vector<int> temp={};
    vector<vector<int>>ans;
    vector<int> nums;
    for (int i=1;i<=n;i++)nums.push_back(i);
    solve(ans,nums,temp,k,0);
    sort(ans.begin(),ans.end());
    return ans;
}
