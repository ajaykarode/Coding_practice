class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int ans = INT_MIN;
        int suffix = 1;
        int prefix = 1;
        for(int i = 0;i<n;i++){
            
        
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;
        prefix *= nums[i];
        suffix *= nums[n-i-1];
        ans = max(ans,max(prefix,suffix));
    }
        return ans;
    }
    
    
//     int maxProduct(vector<int> &nums) {
//     int n = nums.size(); //size of array.

//     int pre = 1, suff = 1;
//     int ans = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (pre == 0) pre = 1;
//         if (suff == 0) suff = 1;
//         pre *= nums[i];
//         suff *= nums[n - i - 1];
//         ans = max(ans, max(pre, suff));
//     }
//     return ans;
// }
};


