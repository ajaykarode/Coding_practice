//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    // static bool cmp(Item a, Item b){
    //     double i1 = (double)a.value/(double)a.weight;
    //     double i2 = (double)b.value/(double)b.weight;
    //     return i1 > i2;
    // }
    
    
    static bool cmp(Item a, Item b){
        double num1 = (double)a.value/(double)a.weight;
        double num2 = (double)b.value/(double)b.weight;
        return num1 > num2;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        // sort(arr,arr+n,cmp);
        // double profit = 0.0;
        // int cweight = 0;
        // for(int i = 0;i<n;i++){
        //     if(cweight + arr[i].weight <= W){
        //         cweight += arr[i].weight;
        //         profit += arr[i].value;
        //     }
        //     else{
        //         int remain = W - cweight;
        //         profit += ((double)arr[i].value/arr[i].weight) * remain;
        //         break;
        //     }
        // }
        sort(arr,arr+n,cmp);
        
        int currweight = 0;
        double profit = 0.0;
        for(int i = 0;i<n;i++){
            if(currweight + arr[i].weight <= W){
                currweight+= arr[i].weight;
                profit+= arr[i].value;
            }
            else{
                int remain = W- currweight;
                profit+= ((double)arr[i].value/arr[i].weight) * remain;
                break;
            }
        }
        return profit;
        
    }
        
        
};










//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends