class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        // vector<int>res;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(nums.empty()){
            return ans;
        }
        for(int i = 0;i<n;i++){
            long long target3 = target - nums[i];
            for(int j = i+1;j<n;j++){
                long long target2 = target3 - nums[j];
                
                int front  = j+1,back = n-1;
                while(front < back){
                    int two_sum = nums[front] + nums[back];
                    if(two_sum < target2) front++;
                    else if(two_sum > target2) back--;
                    else{
                        vector<int>res(4,0);
                        res[0] = nums[i];
                        res[1] = nums[j];
                        res[2] = nums[front];
                        res[3] = nums[back];
                        ans.push_back(res);
                        while(front < back && nums[front] == res[2]) front++;
                        while(front < back && nums[back] == res[3]) back--;
           
                    }
                }
                while(j+1 < n && nums[j+1] == nums[j]) j++;
                
            }
            while(i+1 < n && nums[i+1] == nums[i]) i++;
        }
        return ans;
        
        
    }
};