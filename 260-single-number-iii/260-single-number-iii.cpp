class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>ans;
        vector<int>res;
        for(auto i: nums){
            ans[i]++;
        }
        for(auto j:ans){
            if(j.second == 1){
                res.push_back(j.first);
            }
        }
        return res;
        
        
    }
};