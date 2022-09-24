class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
//         int low = 0,mid = 0,high = n-1;
//         while(mid<=high){
//             switch(nums[mid]){
//                 case 0:
//                     swap(nums[mid++],nums[low++]);
//                     break;
//                 case 1:
//                     mid++;
//                     break;
//                 case 2:
//                     swap(nums[mid],nums[high--]);
//                     break;
                    
//             }
//         }
        
        int i,cnt0 = 0,cnt1 = 0,cnt2 = 0;
        for(i = 0;i<n;i++){
            if(nums[i] == 0){
                cnt0++;
            }
            if(nums[i] == 1){
                cnt1++;
            }
            if(nums[i] == 2){
                cnt2++;
            }
        }
        i = 0;
        while(cnt0>0){
            nums[i++] = 0;
            cnt0--;
                
        }
        while(cnt1>0){
            nums[i++] = 1;
            cnt1--;
        }
        while(cnt2>0){
            nums[i++] = 2;
            cnt2--;
        }
        
        
        
    }
};