class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int p = n/3;
        vector<int>ans;
        // int c = floor(p);
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto j: mp){
            if(j.second > p){
                ans.push_back(j.first);
            }
        }
        return ans;
        
    }
};