class CustomStack {
public:
    vector<int>arr;
    int sz;
    CustomStack(int maxSize) {
        sz = maxSize;
    }
    
    void push(int x) {
        if(arr.size() < sz){
            arr.push_back(x);
        }        
    }
    
    int pop() {
        if(arr.size() == 0) return -1;
       int ans = arr.back();
        arr.pop_back();
        return ans;
        
    }
    
    void increment(int k, int val) {
        k = min(k, (int)arr.size());
        for(int i = 0;i<k;i++){
            arr[i] += val;
        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */