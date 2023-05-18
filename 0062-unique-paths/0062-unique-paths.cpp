class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r = n-1;
        double ans = 1;
        for(int i = 1;i<=r;i++){
            ans = ans * (N - r + i) / i;
            // ans = ans/i+1;
        }
        return (int)ans;
        // return 0;
    }
};