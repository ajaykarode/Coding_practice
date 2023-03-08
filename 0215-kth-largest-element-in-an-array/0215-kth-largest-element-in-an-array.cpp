class Solution {
    
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int>pq;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            pq.push(nums[i]);
        }
        
        int g = k-1;
        while(g > 0){
            pq.pop();
            g--;
        }
        return pq.top();
        
    }
};