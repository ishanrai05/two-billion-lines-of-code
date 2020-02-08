int Solution::largestRectangleArea(vector<int> &A) {
    int n = A.size();
    stack <int> s;
    int area, tp, i=0;
    int max_area = INT_MIN;
    while (i<n){
        if (s.empty()||A[s.top()]<A[i]) s.push(i++);
        else {
            tp = s.top(); s.pop();
            area = A[tp]*(s.empty()?i:(i-s.top()-1));
            max_area = max(area, max_area);
        }
    }
    while(!s.empty()){
        tp = s.top();
        s.pop();
        area = A[tp]*(s.empty()?i:(i-s.top()-1));
        max_area = max(area, max_area);
    }
    return max_area;
}