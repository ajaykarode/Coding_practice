class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n  = s.size(),result = 0,j,i;
        // unordered_map<char,int> track;
        // for(j = 0, i = 0;j<n;j++){
        //     if(track[s[j]]>0){
        //         i = max(i,track[s[j]]);
        //     }
        //     result = max(result,j-i+1);
        //     track[s[j]] = j+1;
        // }
        // return result;
        vector<int>res(256,-1);
        int n = s.size();
        int len = 0;
        int i = 0,j = 0;
        while(j<n){
            if(res[s[j]] != -1) i = max(res[s[j]]+1,i);
            
            res[s[j]] = j;
            len = max(len,j-i+1);
            j++;
        }
        return len;
        
        
    }
};