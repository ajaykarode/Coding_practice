// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
// //         vector<int> res;
// //          int l = 0, r = 0, i= 0;
// //         while(l < m && r<n){
// //             if(nums1[l] < nums2[r]){
// //                 res[i] = nums1[l];
// //                 i++;
// //                 l++;
// //             }
// //             else{
// //                 res[i] = nums2[r];
// //                 i++;
// //                 r++;
// //             }
            
// //         }
// //         while(l<m){
// //             res[i] = nums1[l];
// //             i++;
// //             l++;
// //         }
// //         while(r<n){
// //             res[i] = nums2[r];
// //             i++;
// //             r++;
// //         }
 
        
//        int i = m-1,j = 0;

//             if(nums1[i] > nums2[j]){
//                 swap(nums1[i],nums2[j]);
//                     i--;
//                     j++;
//             }
//             else{
//                 break;
//             }
//         }
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
        
//     }
// };



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1,j = n-1, k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]< nums2[j]){
                nums1[k--] = nums2[j--];
            }
            else{
                nums1[k--] = nums1[i--];
            }
        }
            while(j>=0){
                nums1[k--] = nums2[j--];
            }
        
       
        
    }
};