class Solution {
public:
    void combi(int ind,int target,vector<int> &candidates,vector<vector<int>>&ans,vector<int>&ds){
     
    
    // if(ind == candidates.size()){
    //     if(target == 0){
    //         ans.push_back(ds);
    //     }
    //     return;
    // }
    // if(candidates[ind] <= target){
    //     ds.push_back(candidates[ind]);
    //     combi(ind,target - candidates[ind],candidates,ans,ds);
    //     ds.pop_back();
    // }
    // combi(ind+1,target,candidates,ans,ds);
        
        
        if(ind == candidates.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return ;
        }

            if(candidates[ind] <= target){
            ds.push_back(candidates[ind]);
            combi(ind,target - candidates[ind],candidates,ans,ds);
            ds.pop_back();
        }
        combi(ind+1,target,candidates,ans,ds);
    
    
    }

    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        combi(0,target,candidates,ans,ds);
        return ans;

        
    }
};