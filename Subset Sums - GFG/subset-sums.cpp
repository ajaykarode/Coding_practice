//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

void func(int index,int sum,vector<int>&arr,int N, vector<int> &sumsubset){
    if(index == N){
        sumsubset.push_back(sum);
        return;
    }
    func(index+1,sum + arr[index],arr,N,sumsubset);
    func(index+1,sum,arr,N,sumsubset);
}
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        
        // int index = 0;
        vector<int>sumsubset;
        func(0,0,arr,N,sumsubset);
        sort(sumsubset.begin(),sumsubset.end());
        return sumsubset;
        // Write Your Code here
        // vector<int>ans = {0};
        // ans.push_back(0);
        // for(int i = 0;i<N;i++){
        //     ans.push_back(arr[i]);
        // }
        
        // int sum = 0;
        // for(int i = 0;i<N;i++){
        //     int v = ans.size();
        //     for(int j = 0;j<v;j++){
        //         ans.push_back(ans[j] + arr[i]);
        //     }
        // }
        // return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends