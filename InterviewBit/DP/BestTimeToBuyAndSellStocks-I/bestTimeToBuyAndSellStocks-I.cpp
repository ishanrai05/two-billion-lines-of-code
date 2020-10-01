int Solution::maxProfit(const vector<int> &price) {
    if (price.size()<=1) return 0;
    int minprice=INT_MAX;
    int maxprofit=0;
    for (int i=0;i<price.size();i++){
        if (price[i]<minprice) minprice=price[i];
        else if (price[i]-minprice>maxprofit) 
            maxprofit=price[i]-minprice;
    }
    return maxprofit;
}
