class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);     //transpose of matrix     
            }
        } 
        for(int i = 0;i<n;i++){
            int start = 0,end = n-1;
            while(start<end){
                swap(matrix[i][start],matrix[i][end]); //reverse the matrix by row
                start++;
                end--;
            
            }
            
        }
        
        
    }
};