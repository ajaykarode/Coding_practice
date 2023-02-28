//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        if(arr.empty()){
            return ans;
        }
        
        for(int i = 0;i<n;i++){
            int target3 = k - arr[i];
            for(int j = i+1;j<n;j++){
                long long target2 = target3 - arr[j];
                
                int front = j+1, back = n-1;
                
                while(front < back){
                    long long target_sum2 = arr[front] + arr[back];
                    if(target_sum2 < target2){
                        front++;
                    }
                    else if(target_sum2 > target2){
                        back--;
                    }
                    else{
                        vector<int>quadr(4,0);
                        quadr[0] = arr[i];
                        quadr[1] = arr[j];
                        quadr[2] = arr[front];
                        quadr[3] = arr[back];
                        ans.push_back(quadr);
                        
                        while(front < back && arr[front] == quadr[2]) front++;
                        while(front < back && arr[back] == quadr[3]) back--;
                    }
                }
                while( j+1 < n && arr[j+1] == arr[j]) ++j;
            }
            
            while(i+1 < n && arr[i+1] == arr[i]) ++i;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends