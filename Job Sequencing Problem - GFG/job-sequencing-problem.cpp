//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends


// class Solution 
// {
//     public:
    
    // static bool cmp(Job a, Job b){
    //         return a.profit > b.profit;
    // }
    // //Function to find the maximum profit and the number of jobs done.
    // vector<int> JobScheduling(Job arr[], int n) 
    // { 
        
    //     sort(arr,arr+n,cmp);
    //     int maxi = arr[0].dead;
    //     for(int i = 1;i<n;i++){
    //         maxi = max(maxi,arr[i].dead);
    //     }
        
    //     vector<int>slot(maxi+1, -1);
        
        
    //     int maxprofit = 0,count = 0;
    //     for(int i = 0;i<n;i++){
            
    //         int currProfit = arr[i].profit;
    //         int currId = arr[i].id;
    //         int currDead = arr[i].dead;
            
    //         for(int j = currDead;j>0;j--){
    //             if(slot[j] == -1){
    //                 slot[j] = currId;
    //                 count++;
    //                 maxprofit+= currProfit;
    //                 break;
    //             }
    //         }
    //     }
    //     vector<int>ans;
    //     ans.push_back(count);
    //     ans.push_back(maxprofit);
    //     return ans;
        
//     } 
// };


class Solution 
{
    public:
    
    static bool cmp(Job a, Job b){
        
        return a.profit > b.profit;
    }
    
        vector<int> JobScheduling(Job arr[], int n) {
            
            sort(arr,arr+n,cmp);
            
            int maxidead = INT_MIN;
            
            for(int i = 0;i<n;i++){
                maxidead = max(maxidead,arr[i].dead);
            }
            
            vector<int>schedule(maxidead+1, -1);
            
            int count = 0, profit = 0;
            
            for(int i = 0;i<n;i++){
                int currprofit = arr[i].profit;
                int currdead = arr[i].dead;
                int currid = arr[i].id;
                
                for(int k = currdead;k>0;k--){
                    if(schedule[k] == -1){
                        count++;
                        profit+= currprofit;
                        schedule[k] = currid;
                        break;
                    }
                }
                
            }
            vector<int>ans;
            ans.push_back(count);
            ans.push_back(profit);
            return ans;
            
            
        }
        
};  
        
        
        
        
        
        
        
        
        

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends