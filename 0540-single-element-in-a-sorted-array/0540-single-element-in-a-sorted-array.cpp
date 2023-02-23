class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto x: nums)
            m[x]++;
        
        for(auto y: m)
            if(y.second ==1)
                return y.first;
            
        
        return -1;
    }
};