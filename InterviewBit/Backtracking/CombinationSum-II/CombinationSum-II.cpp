void solve(vector<vector<int>>&ans,vector<int>&candidates,
            vector<int>&current, int current_sum,
            int &target,int index){
    if (current_sum==target){
        vector<int>temp=current;
        sort(temp.begin(),temp.end());
        ans.push_back(temp);
    }
    else if(current_sum>target||index>candidates.size()) return;
    else {
        for(int i=index;i<candidates.size();i++){
            current.push_back(candidates[i]);
            current_sum+=candidates[i];
            solve(ans,candidates,current,current_sum,target,i+1);
            current_sum-=candidates[i];
            current.pop_back();
        }
    }
}
vector<vector<int>> Solution::combinationSum(vector<int> &candidates, int target) {
   vector<vector<int>> ans;
   int index=0;
   int current_sum=0;
   vector<int>current;
   solve(ans,candidates,current,current_sum,target,index);
   sort(ans.begin(),ans.end());
   ans.erase(unique(ans.begin(),ans.end()),ans.end());
   return ans;
}
