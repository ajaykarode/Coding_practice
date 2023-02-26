//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        // vector<int>v;
        if((A < B &&  C > B) || (C < B && B < A))
            return B;
        else if((A > B && A < C) || (A>C && A<B))
            return A;
        else
            return C;
    //     int a = A;
    //     int b = B;
    //     int c = C;
    //     if ((a < b && b < c) || (c < b && b < a))
    //         return b;
 
    // // Checking for a
    //     else if ((b < a && a < c) || (c < a && a < b))
    //         return a;
 
    //     else
    //       return c;
            
        // return v;    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}
// } Driver Code Ends