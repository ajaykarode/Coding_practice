class Solution {
public:
    
    void combi(int i,int target,vector<int>&candidates,vector<int>&ds,vector<vector<int>> &ans){
        
        
            if(target == 0){
                ans.push_back(ds);
                return;
        }
        for(int ind = i;ind < candidates.size();ind++){
            if(ind > i && candidates[ind] == candidates[ind-1]) continue;
            if(candidates[ind] > target) break;
            ds.push_back(candidates[ind]);
            combi(ind+1,target - candidates[ind],candidates,ds,ans);
            ds.pop_back();
        
        }
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());

        combi(0,target,candidates,ds,ans);
       
        return ans;
    }
};