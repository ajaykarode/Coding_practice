class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(),curr_sum = 0,max_end_here = INT_MIN;
        for(int i = 0;i<n;i++){
            curr_sum+= nums[i];
        
            if(curr_sum>max_end_here)
                max_end_here = curr_sum;
        
            if(curr_sum < 0)
                curr_sum = 0;
        }
        return max_end_here;
        
    }
};