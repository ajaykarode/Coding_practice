class Solution {
public:
    void solve(string s,vector<string>&ans, unordered_map<string,bool> &mp, int removal ){
        if(mp[s])
            return ;
        mp[s] = true;
        
        if(removal == 0){
            int removal_need = find_removal(s);
            if(removal_need == 0)
                ans.push_back(s);
            
            return;
        }
        
        for(int i = 0;i<s.length();i++){
            string leftprt = s.substr(0,i);
            string rightprt = s.substr(i+1);
            string join = leftprt + rightprt;
            solve(join,ans,mp,removal-1);
        }
        return;
    }
    
    int find_removal(string s){
        
        stack<char>st;
        
        for(int i = 0;i<s.length();i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                if(st.size() != 0 && st.top() == '(')
                    st.pop();
                else
                    st.push(')');
                
            }
        }
        return st.size();
        
    }
    
    
    
    vector<string> removeInvalidParentheses(string s) {
        unordered_map<string,bool> mp;
        int removal = find_removal(s);
        vector<string>ans;
        solve(s,ans,mp,removal);
        return ans;
    }
};