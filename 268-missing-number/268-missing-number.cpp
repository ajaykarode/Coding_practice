class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n+1)/2;
        int ans = 0;
        for(int i = 0;i<n;i++){
            ans+= nums[i];
        }
            
        int res = abs(ans - sum);
        return res;
        // if(res == 0)
        //     return n+1;
        // return res;  
            
        
        
    }
};