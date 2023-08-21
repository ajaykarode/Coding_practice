// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
// //         deque<int>dq;
// //         vector<int>ans;
// //         int n = nums.size();
        
// //         for(int i = 0;i<k;i++){
// //             while(!dq.empty() && nums[dq.back()] < nums[i]){
// //                 dq.pop_back();
// //             }
// //             dq.push_back(i);
// //         }
// //         ans.push_back(nums[dq.front()]);
        
// //         for(int i = k;i<n;i++){
// //             if(dq.front() == i-k){
// //                 dq.pop_front();
// //             }
// //             while(!dq.empty() && nums[dq.back()] < nums[i]){
// //                 dq.pop_back();
// //             }
// //             dq.push_back(i);
// //             ans.push_back(nums[dq.front()]);
// //         }
// //         return ans;
        
        

//     }
// };



class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {

    int n = arr.size();
        vector<int>ans;
    multiset<int,greater<int>>s;
    for(int i = 0;i<k;i++){
        s.insert(arr[i]);
    }
    ans.push_back(*s.begin());


    for(int i = k;i<n;i++){
        s.erase(s.lower_bound(arr[i-k]));
        s.insert(arr[i]);
        ans.push_back(*s.begin());
        

    }
        return ans;
    }
};