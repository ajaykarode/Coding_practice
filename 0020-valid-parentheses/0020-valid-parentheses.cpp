class Solution {
public:
//     bool isValid(string s) {
//         stack<char>st;
//         for(auto it: s){
//             if(it == '(' || it=='{' || it=='['){
//                 st.push(it);
//             }
//             else{
//                 if(st.size() == 0) return false;
//                 char ch = st.top(); 
//                 st.pop();
//                 if((it == ')' && ch == '(') || (it == ']' && ch == '[') || (it == '}' && ch == '{')) continue;        
//                 else return false;
                
//             }
//         }
//         return st.empty();
        
//     }
    
    
    bool isValid(string s){
        
        stack<char>st;
        for(auto i: s){
            if(i == '(' || i == '{' || i == '['){
                st.push(i);
            }
            else{
                
                if(st.size() == 0) return false;
                char c = st.top();
                st.pop();
                
                if((c == '(' && i == ')') || (c == '{' && i == '}') || (c == '[' && i == ']')) continue;
        
                else return false;
            }
        }
        
        return st.empty();
        
        
        
    }
    
};


