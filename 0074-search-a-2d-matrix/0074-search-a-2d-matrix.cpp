class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         if(!matrix.size()) return false;
//         int m = matrix.size();
//         int n = matrix[0].size();  
//         int lo = 0;
//         int high  = (m*n) - 1;
        
//         while(lo<=high){
//             int mid = (lo + (high - lo) / 2);
//             if(matrix[mid/n][mid%n] == target){
//                 return true;
//             }
//             if(matrix[mid/n][mid%n] < target){
//                 lo = mid+1;
//             }
//             else{
//                 high = mid - 1;
//             }         
            
//         }
//         return false;
        
        if(matrix.size() == 0) return 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int lo = 0;
        int high = (m*n) - 1;
        while(lo <= high){
            int mid = (lo + (high - lo) /2);
            if(matrix[mid/m][mid%m] == target){
                return true;
            }
            if(matrix[mid/m][mid%m] < target){
                lo = mid+1;
            }
            else{
                high = mid-1;
            }
            
        }
        return false;
               
    }
};
