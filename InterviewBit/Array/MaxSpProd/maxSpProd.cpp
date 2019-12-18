#define MAX 100000
#define MOD 1000000007
vector <int> nextLeft(vector<int> &a,int n){
    std::vector<int> leftI(MAX,0);
    stack<int> s;
    for (int i=n-1;i>=0;i--){
        while(!s.empty()&&a[i]>a[s.top()]){
            int r = s.top();
            s.pop();
            leftI[r]=i;
        }
        s.push(i);
    }
    while (!s.empty()){
        int r = s.top();
        leftI[r] = 0; 
        s.pop();
    }
    return leftI;
}

vector <int> nextRight(vector<int> &a, int n){
    std::vector<int> rightI(MAX,0);
    stack <int> s;
    for (int i=0;i<n;i++){
        while(!s.empty() && a[i]>a[s.top()]){
            int r = s.top();
            s.pop();
            rightI[r] = i;
        }
        s.push(i);
    }
    while (!s.empty()){
        int r = s.top();
        rightI[r] = 0; 
        s.pop();
    }
    return rightI;
}

int Solution::maxSpecialProduct(vector<int> &A) {
    int s = A.size();
    long long maxp = -1;
    std::vector<int> left = nextLeft(A, s);
    std::vector<int> right = nextRight(A, s);
    for (int i = 0; i<s; i++){
        maxp = max(maxp,left[i]*1LL*right[i]);
    }
    return maxp%1000000007;
}
