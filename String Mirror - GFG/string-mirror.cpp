//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        char last=str[0];
        string tmp,ans1,ans2;
        tmp+=str[0];
        for(int i=1;i<str.length();i++){
            if(str[i]<last){
                last=str[i];
                tmp+=last;
            }
            else break;
        }
        ans1+=tmp;
        reverse(tmp.begin(),tmp.end());
        ans1+=tmp;
        tmp="";
        tmp+=str[0];
        last=str[0];
        for(int i=1;i<str.length();i++){
            if(str[i]<=last){
                last=str[i];
                tmp+=last;
            }
            else break;
        }
        ans2+=tmp;
        reverse(tmp.begin(),tmp.end());
        ans2+=tmp;
        return min(ans1,ans2);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends