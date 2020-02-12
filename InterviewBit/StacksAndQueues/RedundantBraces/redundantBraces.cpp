int Solution::braces(string A) {
    stack <char> s;
    for (char a:A){
        if (a==')'){
            if (!s.empty()){
                if (s.top()=='(') return 1;
                else {
                    s.pop(); 
                    s.pop();
                }
            }
            else return 1;
        }
        else if (a=='('||a=='+'||a=='-'||a=='*'||a=='/') s.push(a); 
    }
    return 0;
}