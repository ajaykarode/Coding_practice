class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r = n-1;
        double ans = 1;
        for(int i = 1;i<=r;i++){
            ans = ans * (N - r + i)/ i;
        }
        return ans;
    }
};







// this sol gives tle
// class Solution {
// public:
    
//     int unique(int i,int j,int m,int n){
//         if(i == m-1 && j == n-1) return 1;
//         if(i > m-1 || j > n-1) return 0;
//         else return unique(i+1,j,m,n) + unique(i,j+1,m,n);
//     }
//     int uniquePaths(int m, int n) {
//         return unique(0,0,m,n);
//     }
// };
