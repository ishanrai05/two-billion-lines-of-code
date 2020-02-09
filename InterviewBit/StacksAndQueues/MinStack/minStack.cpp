vector <int> s;
int min_elem;
bool flag;
MinStack::MinStack() {
    min_elem = INT_MAX;
    flag = false;
    s.clear();
}

void MinStack::push(int x) {
    min_elem = min(min_elem,x);
    s.push_back(x);
}

void MinStack::pop() {
    if (!s.empty()) {
        int x = top();
        if (x==min_elem) flag=true;
        s.pop_back();
    }
}

int MinStack::top() {
    if (!s.empty()) return s[s.size()-1];
    return -1;
}

int MinStack::getMin() {
    if (!s.empty()){ 
        if (flag) return *min_element(s.begin(),s.end());
        return min_elem;
    }
    return -1;
}

