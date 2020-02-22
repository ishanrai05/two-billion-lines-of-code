void solve(vector<vector<int>>&ans,vector<int>&nums,vector<int>&current,int k,int &current_sum,int i){
    if(current_sum>k) return;
    else if (current_sum==k){
        ans.push_back(current);
    }
    else{
        for (int j=i;j<nums.size();j++){
            current_sum+=nums[j];
            current.push_back(nums[j]);
            solve(ans,nums,current,k,current_sum,j);
            current_sum-=nums[j];
            current.pop_back();
        }
    }
}

vector<vector<int> > Solution::combinationSum(vector<int>&nums, int k) {
    vector<vector<int>> ans;
    vector<int> current={};
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    int current_sum=0;
    solve(ans,nums,current,k,current_sum,0);
    return ans;
}