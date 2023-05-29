class MinStack {
public:
    vector<int>v;
    int m=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        // m = min(m,val);
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        if(v.empty()==true)return -1;
        return v[v.size()-1];
    }
    
    int getMin() {
        int m=INT_MAX;
        for(int i=0;i<v.size();i++){
            m = min(m,v[i]);
        }
        return m;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */