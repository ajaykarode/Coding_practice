class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int left = 0;
        int right = n-1;
        int leftmax = 0;
        int rightmax = 0;
        int count = 0;
        while(left <= right){
            if(height[left] <= height[right]){
                if(height[left] > leftmax)  leftmax = height[left];
                else count+= leftmax - height[left];        
                left++;
            }
            else{
                if(height[right] > rightmax) rightmax = height[right];
                else count+= rightmax - height[right];
                
                right--;
            }
        }
        return count;
    }
};

































// int n = height.size();
//         int left = 0,right = n-1;
//         int ans = 0;
//         int maxleft = 0,maxright = 0;
        
//         while(left<=right){
//             if(height[left]<= height[right]){
//                 if(height[left]>= maxleft) maxleft = height[left];
//                 else ans+= maxleft - height[left];
            
//             left++;
//             }
//             else{
//                 if(height[right]>= maxright) maxright = height[right];
//                 else ans+= maxright - height[right];
                
//                 right--;
//             }
//         }
//         return ans;