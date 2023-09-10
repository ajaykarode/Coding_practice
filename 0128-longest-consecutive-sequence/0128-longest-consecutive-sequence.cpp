class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         if(nums.size() == 0){
//             return 0;
//         }
//         int count = 1;
//         int ans = 1;
//         sort(nums.begin(),nums.end()); 
//         int prev = nums[0];
//         for(int i = 1;i<nums.size();i++){
//             if(nums[i] == prev + 1) 
//                 {
//                     count++;
//                 }
//             else if(nums[i] != prev){
//                 count = 1;
//             }
//             prev = nums[i];
//             ans = max(ans,count);
            
//         }
//         return ans;
        if(nums.size() == 0){
            return 0;
        }
        
        int count = 1;
        int maxi = 1;
        sort(nums.begin(),nums.end());
        int prev = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(nums[i] == prev+1){
                count++;
            }
            else if(nums[i] != prev){
                count = 1;
            }
            prev = nums[i];
            maxi = max(maxi,count);
        }
        return maxi;
    }
};