//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        
        vector<int>freq(n+1,0);
        for(int i = 0;i<n;i++){
                freq[arr[i]]++;
            
        }
        int repeat = -1, miss= -1;
        for(int i = 1;i<=n;i++){
            if(freq[i] == 2){
                repeat = i;
            }
            if(freq[i] == 0){
                miss = i;
            }
        }
        return {repeat, miss};
    }
};

    // vector<int>temp(n+1,0);
    //     for(int i = 0;i<n;i++){
    //         temp[arr[i]]++;
    //     }
    //     // int s = temp.size();
    //     int repeat = -1,miss = -1;
    //     for(int i = 1;i<=n;i++){
    //         if(temp[i] == 0){
    //             miss = i;
    //         }
    //         if(temp[i] == 2){
    //             repeat = i;
    //         }
    //         if(repeat != -1 && miss != -1){
    //             break;
    //         }
    //     }
    //     return { repeat, miss }; 

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends