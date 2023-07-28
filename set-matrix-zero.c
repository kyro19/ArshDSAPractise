#link : https://leetcode.com/problems/set-matrix-zeroes/description/

class Solution {
    public void setZeroes(int[][] matrix) {
        int n,m,i,j;
        n= matrix.length;
        m = matrix[0].length;
        int row[] = new int[n];
        int col[] = new int[m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i] = 1;
                    col[j] = 1;
                }
                
            }
        }
        for(i=0; i<n;i++){
            for(j=0;j<m;j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }

    }
}
