//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int minCost(vector<vector<int>> &costs) {
        int n = costs.size();
        if (n == 0) return 0;
        int k = costs[0].size();
        if (k == 0) return 0;
        int low1 = INT_MAX;
        int low2 = INT_MAX;
        vector<vector<int>> dp(n, vector<int>(k));
        for (int i = 0; i < k; i++) {
            dp[0][i] = costs[0][i];
            if (costs[0][i] < low1) {
                low2 = low1;
                low1 = costs[0][i];
            } else if (costs[0][i] < low2) {
                low2 = costs[0][i];
            }
        }
        if (n == 1) {
            return low1;
        }
        int a1 = INT_MAX;
        int a2 = INT_MAX;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < k; j++) {
                if (dp[i - 1][j] != low1) {
                    dp[i][j] = costs[i][j] + low1;
                }
                else {
                    dp[i][j] = costs[i][j] + low2;
                }
                    
                if (dp[i][j] < a1) {
                    a2 = a1;
                    a1 = dp[i][j];
                } 
                else if (dp[i][j] < a2) {
                    a2 = dp[i][j];
                }
            }
            low1 = a1;
            low2 = a2;
            a1 = INT_MAX;
            a2 = INT_MAX;
        }
        if (low1 < 0) {
            return -1;
            
        }
        return low1;
    }
    
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> costs(n, vector<int>(k));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) cin >> costs[i][j];
        }
        Solution obj;
        cout << obj.minCost(costs) << endl;
    }
}
// } Driver Code Ends