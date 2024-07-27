/*Given a square matrix mat, return the sum of the matrix diagonals.
Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

Example 1:
Input: mat = [[1,2,3],
              [4,5,6],
              [7,8,9]]
Output: 25
*/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int diagonalSum=0;
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j){
                    diagonalSum+=mat[i][j];
                }
                else if(i==n-j-1){
                    diagonalSum+=mat[i][j];
                }
            }
        }
        return diagonalSum;
    }
};
