//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        int counts = 0;
        int pre_sum = 0;
        unordered_map<long long int,long long int>s;
        for(int i = 0;i<n;i++){
            pre_sum += arr[i];
            if(pre_sum == 0){
                counts++;
            }
            // if(arr[i] == 0){
            //     count++;
            // }
            if(s.count(pre_sum) != 0){
                counts += s[pre_sum];
            }
            s[pre_sum]++;
        }
        return counts;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends