class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
//         int max = 0;
//         int count = 0;
//         for(int i = 0;i<nums.size();i++){
//             if(nums[i]  == 1){
//                 count++;
//                 if(count > max){
//                     max = count;
//                 }
                
//             }
//             else{
//                 count = 0;
//             }
//         }
//         return max;
        
        
        int maxi = 0;
        int count = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i] == 1){
                count++;
                if(count > maxi){
                    maxi = count;
                }
            }
            else{
                count = 0;
            }
        }
        return maxi;
    }
};