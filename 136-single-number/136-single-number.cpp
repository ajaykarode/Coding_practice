class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int n = nums.size();
        unordered_map<int,int>ans;
        for(auto i:nums){
            ans[i]++;
        }
        for(auto j:ans)
            if(j.second == 1)
                return j.first;
        return -1;
        
    }
};