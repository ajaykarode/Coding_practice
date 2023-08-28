//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    // int f(int ind,int W, int wt[], int val[], int n,vector<vector<int>>&dp){
        
    //     if(ind == 0){
    //         if(wt[0] <= W) return val[0];
    //         else return 0;
    //     }
    //     if(dp[ind][W] != -1) return dp[ind][W];
    //     int nottake = 0 + f(ind-1,W,wt,val,n,dp);
    //     int take = INT_MIN;
    //     if(wt[ind] <= W){
            
    //         take = val[ind] + f(ind-1,W-wt[ind],wt,val,n,dp);
    //     }
        
    //     return dp[ind][W] = max(take,nottake);
        
    // }



    int knapSack(int maxWeight, int wt[], int val[], int n) 
    // { 
    //   // Your code here
    //   vector<vector<int>>dp(n,vector<int>(W+1,0));
    //   for(int w = wt[0]; w<=W;w++) dp[0][w] = val[0];
       
    //   for(int ind = 1;ind<n;ind++){
    //       for(int w = 0;w<=W;w++){
    //           int nottake = 0 + dp[ind-1][W];
    //           int take = INT_MIN;
    //           if(wt[ind] <= w){
            
    //                 take = val[ind] + dp[ind-1][w-wt[ind]];
    //             }
        
    //             dp[ind][w] = max(take,nottake);
    //       }
    //   }
    //   dp[n-1][W];
    // }
    {
        vector<int>prev(maxWeight+1,0),curr(maxWeight+1,0);
        for(int W = wt[0];W<=maxWeight;W++) prev[W] = val[0];
        
          for(int ind = 1;ind<n;ind++){
          for(int W = 0;W<=maxWeight;W++){
              int nottake = 0 + prev[W];
              int take = INT_MIN;
              if(wt[ind] <= W){
            
                    take = val[ind] + prev[W-wt[ind]];
                }
        
                curr[W] = max(take,nottake);
          }
          prev = curr;
      }
     
        
        return prev[maxWeight];
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends