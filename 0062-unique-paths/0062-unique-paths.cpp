class Solution {
public:
    int uniquePaths(int m, int n) {
        // int N = m+n-2;
        // int r = n-1;
        double ans = 1;
        for(int i = 1;i<=n-1;i++){
            ans = ans * ((m+n-2) - (n-1) + i)/ i;
        }
        return ans;
    }
};
