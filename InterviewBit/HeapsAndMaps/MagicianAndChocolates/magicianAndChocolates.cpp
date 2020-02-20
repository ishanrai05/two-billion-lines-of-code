int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<int> pq;
    int mod = 1000000007;
    for (int x:B) pq.push(x);
    long long int tot=0;
    for (int i=0;i<A;i++){
        int toffee = pq.top();
        pq.pop();
        pq.push(toffee/2);
        tot=(tot+toffee)%mod;
    }
    return (int)tot;
}
