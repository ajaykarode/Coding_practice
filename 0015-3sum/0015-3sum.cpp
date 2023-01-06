class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>sol;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-2;i++){
            
            if(i == 0 || i > 0 && nums[i] != nums[i-1]){
                
                int lo = i+1, high = nums.size()-1,sum = 0-nums[i];
                
                while(lo < high){
                    
                    if(nums[lo] + nums[high] == sum){
                        
                        vector<int> ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[lo]);
                        ans.push_back(nums[high]);
                        sol.push_back(ans);
                        
                        while(lo < high && nums[lo] == nums[lo+1]) lo++;
                        while(lo < high && nums[high] == nums[high-1]) high--;
                        
                        lo++, high--;
                    }
                    else if(nums[lo] + nums[high] < sum)
                        lo++;
            
                    else
                        high--;
                }
            }
            
            
        }
        return sol;
        
    }
};