// class Solution {
// public:
//     void func(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){

//         ans.push_back(ds);
//         for(int i = ind;i<nums.size();i++){
//             if(i != ind && nums[i] == nums[i-1]) continue;
//             ds.push_back(nums[i]);
//             func(i+1,nums,ds,ans);
//             ds.pop_back();
//         }
    
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        

        
//         sort(nums.begin(),nums.end());
//         vector<vector<int>>ans;
//         vector<int>ds;
//         func(0,nums,ds,ans);
//         return ans;
            
        
        
//     }
// };



class Solution {
public:
    void func(int ind,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans){
  
        
        
        ans.push_back(temp);
        for(int i = ind;i<nums.size();i++){
            if(i != ind && nums[i] == nums[i-1]) continue;
            temp.push_back(nums[i]);
            func(i+1,nums,temp,ans);
            temp.pop_back();
        }
        
    
    
    }
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        func(0,nums,temp,ans);
        return ans;
        

        
        
    }
};