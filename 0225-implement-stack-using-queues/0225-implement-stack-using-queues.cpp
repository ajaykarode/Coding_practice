// class MyStack {
// public:
// //     MyStack() {
        
// //     }
    
//     queue<int>q1;
//     queue<int>q2
//     void push(int x) {
//         q.push(x);
//         for(int i = 0;i<q.size()-1;i++){
//             q.push(q.front());
//             q.pop();
//         }
//     }
    
//     int pop() {
//         int temp = q.front();
//         q.pop();
//         return temp;
        
//     }
    
//     int top() {
//         return q.front();
        
//     }
    
//     bool empty() {
//         return q.empty();
//     }
// };


class MyStack {
public:
//     MyStack() {
        
//     }
    
    queue<int>q1;
    queue<int>q2;
        
        
    void push(int x) {
        q1.push(x);
        
    }
    
    int pop() {
        int n = q1.size();
        while(n > 1){
            int temp = q1.front();
            q2.push(temp);
            q1.pop();
            n--;
        }
        int x = q1.front();
        q1.pop();
        
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return x;

        
    }
    
    int top() {
        int n = q1.size();
        while(n > 1){
            int temp = q1.front();
            q2.push(temp);
            q1.pop();
            n--;
        }
        int x = q1.front();
        q1.pop();
        
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        q1.push(x);
        return x;
        
    }
    
    bool empty() {
        return q1.empty();
    }
};
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */