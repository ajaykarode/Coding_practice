// class Solution {

// int total = 0;

// private: 
//     void merge(vector<double> nums,int low,int mid,int high){
//     int j = mid+1;
    
//     for(int i = low;i<mid;i++){
//         while( j <= high && nums[i] > 2 * nums[j]){
//             j++;
//         }
//         total = j - (mid + 1);
//     }
    
//     vector<double> t;
//     int left = low;
//     int right = mid + 1;
    
//     while(left <= mid && right<= high){
//         if(nums[left] <= nums[right]){
//             t.push_back(nums[left++]);
//         }
//         else{
//             t.push_back(nums[right++]);
//         }
//     }
//     while(left<=mid){
//         t.push_back(nums[left++]);
//     }
    
//     while(right<=high){
//         t.push_back(nums[right++]);
//     }
//     for(int i = low;i<high;i++){
//         nums[i] = t[i-low];
//     }
//     return;
// }

// void mergesort(vector<double> arr,int low,int high){
//     int mid = low + high / 2;
//     if(low>=high) return;
//     mergesort(arr,low, mid);
//     mergesort(arr,mid+1,high);
//     merge(arr,low,mid,high);
//     return;
// }
// public:
//     double reversePairs(vector<double>& nums) {
//         total = 0;
//         mergesort(nums,0,nums.size()-1);
//         return total;
//     }
// };



class Solution {
private:
    int count;
   
    void checkCount(vector<int>& nums, int start, int mid, int end){

        // two pointers;
        int l = start, r = mid + 1;
        while(l <= mid && r <= end){
            if((long)nums[l] > (long) 2 * nums[r]){
                count += (mid - l + 1);
                r++;
            }else{
                l++;
            }
        }
       // worst case might be nlog(n) 
        sort(nums.begin() + start, nums.begin() + end + 1);
        return;
        
        
        
        //every step sort
    }
    void mergeSort(vector<int>& nums, int start, int end){
        if(start == end) return;
        
        int mid = (start + end)/2;
        mergeSort(nums,start, mid);
        mergeSort(nums,mid+1,end);
        
        checkCount(nums,start,mid,end);
        return;
        
    }
public:
    int reversePairs(vector<int>& nums) {
        if(!nums.size())return 0;
        count = 0;
        mergeSort(nums,0,nums.size()-1);
        return count;
    }
};