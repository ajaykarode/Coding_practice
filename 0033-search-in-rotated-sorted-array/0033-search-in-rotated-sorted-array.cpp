class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target)
                return i; }
        return -1;    
    }};



// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
        
//         int low = 0;
//         int high = nums.size() -1;
        
//         while(low <= high){
//             int mid = (low + high) >> 1;
            
//             if(nums[mid] == target){
//                 return mid;
//             }
//             if(nums[low] <= nums[mid]){
//                 if(nums[low] <= target && nums[mid] >=target)
//                     high = mid -1;
//                 else
//                     low = mid + 1;
//             }
//             else
//                 if(nums[mid] <= target && nums[high] >= target)
//                     low = mid + 1;
                
//                 else
//                     high = mid - 1;
                    
//         }
//         return -1;
        
        
//     }
// };