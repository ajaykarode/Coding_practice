//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:


    int lessthanmid(vector<int>&arr,int mid){
        int l = 0,high = arr.size()-1;
        while(l <=high){
            int md = (l+high) >> 1;
            if(arr[md] <= mid){
                l = md+1;
            }else{
                high = md-1;
            }
        }
        return l;
    }



    int median(vector<vector<int>> &matrix, int R, int C){
        // code here    
        // int row = R;
        // int col = C;
        // int min = INT_MAX;
        // int max = INT_MIN;
        
        // for(int i = 0;i<R;i++){
        //     if(matrix[i][0] < min)
        //         min = matrix[i][0];
        //     if(matrix[i][C-1] > max)
        //         max = matrix[i][C-1];
        // }
        
        // int desired = (R * C + 1) / 2;
        // while(min < max){
        //     int mid = min + (max - min) / 2;
        //     int place = 0;
            
        // for(int i = 0;i<R;i++)
        //     place+= upper_bound(matrix[i],matrix[i]+C,mid) - matrix[i];
        // if(place< desired)
        //     min = mid + 1;
        // else
        //     max = mid;
        
        
        // }
        // return min;
        
        int low = 1,hi = 1e9;
        while(low <= hi){
            int mid = (low + hi) >> 1;
            int cnt = 0;
            for(int i = 0;i<R;i++){
                cnt+= lessthanmid(matrix[i],mid);
            }
            if(cnt<= (R*C) / 2) low = mid+1;
            else hi = mid-1;
        }
        return low;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends