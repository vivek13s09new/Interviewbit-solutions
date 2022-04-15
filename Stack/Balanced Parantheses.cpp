int Solution::solve(string A) {
    stack<char> st;
    for(int i = 0; i < A.size(); i++){
        if(A[i] == '('){
            st.push(A[i]);
        }else if (A[i] == ')' && !st.empty()){
            st.pop();
        }else{
            return 0;
        }
    }
    return st.empty() ? 1 : 0;
}
