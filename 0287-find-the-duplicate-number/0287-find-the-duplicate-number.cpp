class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int n = nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i = 0;i<n-1;i++){
        //     if(nums[i] == nums[i+1])
        //         return nums[i];
        // }
        // int n = nums.size();
        // vector<int>freq(n+1,0);
        // for(int i = 0;i<n;i++){
        //     if(freq[nums[i]] == 0){
        //         freq[nums[i]] += 1;
        //     }
        //     else{
        //         return nums[i];
        //     }
        // }
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
            
            fast = nums[0];
        while(fast != slow){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
        return 0;

    }
};
