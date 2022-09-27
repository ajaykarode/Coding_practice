class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        int res;
        
        vector<int>ans(n+1,0);
        for(int i = 0;i<n;i++){
            if(ans[nums[i]] == 0){
                ans[nums[i]] += 1;
            }
            else{
                res = nums[i];
            }
            
        }
        
    
    return res;
    } 
};