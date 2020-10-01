int Solution::maxProfit(const vector<int> &arr) {
    if (arr.size()==0) return 0;
    int min_val=arr[0];
    int max_profit=0;
    for (int i=1;i<arr.size();i++){
        if (arr[i]<min_val){
            min_val=arr[i];
        } else{
            max_profit+=arr[i]-min_val;
            min_val=arr[i];
        }
    }
    return max_profit;
}
