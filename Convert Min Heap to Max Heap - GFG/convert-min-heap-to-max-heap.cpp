//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
void minheapify(vector<int> &arr,int n,int i){
    int maximum = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] > arr[maximum]){
        maximum = left;
    }
    if(right < n && arr[right] > arr[maximum]){
        maximum = right;
    }

    if(maximum != i){
        swap(arr[maximum], arr[i]);
        minheapify(arr,n,maximum);
    }

}





class Solution{
public:
    void convertMinToMaxHeap(vector<int> &arr, int N){
        
        for(int i = N/2-1; i>=0;i--){
            minheapify(arr,N,i);
        }
    
    // for(int i = 0;i<N;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    
    // }
    }  
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        obj.convertMinToMaxHeap(vec,n);
        for(int i = 0;i<n;i++) cout << vec[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends