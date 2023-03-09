//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class three{
  public: 
    int val,idx,jdx;
};

struct cmp{
  bool operator()(three a,three b){
      return a.val < b.val;
  }  
};

class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        priority_queue<three,vector<three>,cmp>pq;
        set<pair<int,int>>s;
        vector<int> ans;
        
        pq.push({A[N-1] + B[N-1], N-1,N-1});
        s.insert({N-1,N-1});
        
        while(ans.size() != K){
            three th = pq.top(); pq.pop();
            int vl = th.val, i = th.idx, j = th.jdx;
            ans.push_back(vl);
            
            
            if( i>0 && s.count({i-1,j}) == 0){
                pq.push({A[i-1] + B[j],i-1,j});
                s.insert({i-1,j});
            }
            
            if( j>0 && s.count({i,j-1}) == 0){
                pq.push({A[i] + B[j-1],i,j-1});
                s.insert({i,j-1});
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends