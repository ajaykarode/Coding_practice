// class Solution {
// public:
    
//     int buyorsell(int ind,int tran,vector<int>&prices,int k){
//         int n = prices.size();
//         if(ind == n || tran==k) return 0;
//         if(tran%2 == 0)
//         {
//             // return max(-prices[ind] + buyorsell(ind+1,tran+1,prices,n,k), 0 + buyorsell(ind+1,tran,prices,n,k));
//             return max(-prices[ind] + buyorsell(ind+1,tran+1,prices,k), 0 + buyorsell(ind+1,tran,prices,k));
//         }
//         // return max(prices[ind] + buyorsell(ind+1,tran+1,prices,n,k), 0 + buyorsell(ind+1,tran,prices,n,k));
//         return max(prices[ind] + buyorsell(ind+1,tran+1,prices,k), 0 + buyorsell(ind+1,tran,prices,k));
//     }
        
//     int maxProfit(int k, vector<int>& prices) {
        
//         int n = prices.size();
//         return buyorsell(0,0,prices,k);
        
//     }
// };



class Solution {
public:
    int getAns(vector<int>& prices, int n, int ind, int buy, int cap,vector<vector<vector<int>>>& dp ){
        if(ind==n || cap==0) return 0; //base case
        if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
        int profit;
        if(buy==0){// We can buy the stock
            profit = max(0+getAns(prices,n,ind+1,0,cap,dp), -prices[ind] + getAns(prices,n,ind+1,1,cap,dp));
        }
        if(buy==1){// We can sell the stock
            profit = max(0+getAns(prices,n,ind+1,1,cap,dp),prices[ind] + getAns(prices,n,ind+1,0,cap-1,dp));
        }
        return dp[ind][buy][cap] = profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return getAns(prices,n,0,0,k,dp);
    }
};
