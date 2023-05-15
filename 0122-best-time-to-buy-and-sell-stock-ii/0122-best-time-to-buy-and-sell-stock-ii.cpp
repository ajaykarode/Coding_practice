class Solution {
public:
    int buyorsell(int ind, int buy,vector<int>& prices,vector<vector<int>>&dp){
        int n = prices.size();
        int profit = 0;
        if(ind == n){
            return 0;
        }
        if(dp[ind][buy] != -1) return dp[ind][buy];
        if(buy){
            profit = max(-prices[ind] + buyorsell(ind+1,0,prices,dp), 0 + buyorsell(ind+1,1,prices,dp));
            
        }else{
            profit = max(prices[ind] + buyorsell(ind+1,1,prices,dp), 0 + buyorsell(ind+1,0,prices,dp));
        }
        return dp[ind][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(n, vector<int>(2,-1));
        return buyorsell(0,1,prices,dp);
    }
};