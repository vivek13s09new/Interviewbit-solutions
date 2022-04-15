vector<int> Solution::prevSmaller(vector<int> &A) {
    int n = A.size();
    vector<int> res(n, 0);
    res[0] = -1;
    stack<int> st;
    st.push(0);

    for(int i = 1; i < n; i++){
        while(!st.empty() && A[i] <= A[st.top()]){
            st.pop();
        }
        if(st.empty()){
            res[i] = -1;
        } else{
            res[i] = A[st.top()];
        }
        st.push(i);
    }
    return res;
}
