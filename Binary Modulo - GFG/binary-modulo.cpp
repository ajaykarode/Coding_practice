//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int modulo(string s,int m)
        {
            int n=s.size();
            int p[n];
            p[0]=1;
            for(int i=1;i<n;i++)
                p[i]=(p[i-1]%m * 2%m)%m;
            int ans=0;
            reverse(s.begin(),s.end());
            for(int i=0;i<n;i++)
            {
                int c=s[i]-'0';
                c=(c%m * p[i]%m)%m;
                ans=(ans%m + c%m)%m;
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int m;
        cin>>s>>m;
        Solution a;
        cout<<a.modulo(s,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends