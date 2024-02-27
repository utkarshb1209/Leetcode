class BrowserHistory {
public:
    stack<string> st;
    stack<string> st2;
    string g;
    BrowserHistory(string h) {
        g=h;
    }
    
    void visit(string h) {
        st.push(h);
        while(st2.size()) st2.pop();
    }
    
    string back(int b) {
        while(b--){
            if(st.size()==0){return g;}
            st2.push(st.top());
            st.pop();
        }
        if(st.size()==0){return g;}
        return st.top();
    }
    
    string forward(int b) {
        // b--;
        while(b--){
            if(st2.size()==0) {
                break;
            }
            st.push(st2.top());
            st2.pop();
        }
        if(st.size()==0) return g;
        return st.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */