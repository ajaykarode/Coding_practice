class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n  = s.size(),result = 0,j,i;
        unordered_map<char,int> track;
        for(j = 0, i = 0;j<n;j++){
            if(track[s[j]]>0){
                i = max(i,track[s[j]]);
            }
            result = max(result,j-i+1);
            track[s[j]] = j+1;
        }
        return result;
        
    }
};