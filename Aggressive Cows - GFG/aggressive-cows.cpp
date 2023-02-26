//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    
    public:
    
    int isPossible(vector<int> &stalls, int n,int k,int barrier){
        int cnt = 1;
        int allocated = stalls[0];
        for(int i = 1;i<n;i++){
            if(stalls[i] - allocated >= barrier){
                cnt++;
                allocated = stalls[i];
                
            }
            if(cnt >= k) return true;
            
        }
        return false;
        
    }
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        sort(stalls.begin(),stalls.end());
        int low = 1;
        int high = stalls[n-1] - stalls[0];
        
        while(low <= high){
            int mid = (low + high) >> 1;
            if(isPossible(stalls,n,k,mid)){
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return high;
       
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends