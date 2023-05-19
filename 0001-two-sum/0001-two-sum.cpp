class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // vector<int>ans;
        // int n = nums.size();
        // sort(nums.begin(),nums.end());
        // int left = 0, right = n-1;
        // while(left < right){
        //     int sum = nums[left] + nums[right];
        //     if(sum == target){
        //         ans.push_back(left);
        //         ans.push_back(right);
        //     }
        //     else if(sum < target){
        //         left++;
        //     }
        //     else{
        //         right--;
        //     }
        // }
        // return ans;
        
        
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i = 0;i<n;i++){
            int num = nums[i];
            int moreneed = target - num;
            
            if(mpp.find(moreneed) != mpp.end()){
                return {mpp[moreneed], i };
            }
            mpp[num] = i;
        }
        return {-1,-1};
        
        
    }
};