class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i = 0;i<matrix.size();i++){
        //     for(int j = 0;j<matrix.size();j++){
        //         if(matrix[i][j] == target){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        // int n = matrix.size();    
        int low = 0;
        if(!matrix.size()) return false;
        int high = (matrix.size() * matrix[0].size()) - 1;
        
        
        while(low <= high){
            
            int mid = (low + (high - low) / 2);
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target){
                return true;
            }
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target){
                low = mid+1;
            }
            else{
                high = mid - 1;
                
            }
               
        
        
        }
        return false;
    }
};