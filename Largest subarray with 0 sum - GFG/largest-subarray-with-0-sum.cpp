//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

// class Solution{
//     public:
//     int maxLen(vector<int>&A, int n)
//     {   
//         // Your code here
//         int left = 0,right = 0;
//         int k = 0;
//         int maxlen = 0;
//         int sum = A[0];
//         while(right < n){
//             while(left <= right && sum > k){
//                 sum -= A[left];
//                 left++;
//             }
            
//             if(sum == k){
//                 maxlen = max(maxlen, right - left + 1);
//             }
             
//             right++;
//             if(right < n) sum+= A[right];
//         }
//         return maxlen;
//     }
// };

/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>mpp;
        int count = 0;
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum += A[i];
            if(sum == 0){
                count = i + 1;
            }
            else{
                if(mpp.find(sum) != mpp.end()){
                    count = max(count,i-mpp[sum]);
                }
                else{
                    mpp[sum] = i;
                
                }
            }
        }
        return count;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends