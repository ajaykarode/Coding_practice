class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>ans;
        int i,j;
        for(auto i: nums){
            ans[i]++;
        }
        
        for(auto j: ans)
            if(j.second == 1)
                return j.first;
        return -1;
    }
};