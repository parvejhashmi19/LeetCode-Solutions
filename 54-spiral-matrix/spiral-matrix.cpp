class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int>ans;
         int row = matrix.size();
         int col = matrix[0].size();
         
         int top = 0;
         int bottom = row-1;
         int left = 0;
         int right = col-1;

         while(top<=bottom && left<=right){
            //top print krege
            for(int j=left; j<=right; j++){
                ans.push_back(matrix[top][j]);
                
            }// for
            top++;

            // right print 

            for(int i =top; i<=bottom; i++){
                ans.push_back(matrix[i][right]);
                
            }// for
            right--;

            // bottom print
         if(top<=bottom){
            for(int j=right; j>=left; j--){
                ans.push_back(matrix[bottom][j]);
                
            }// for
            bottom--;
         }
            
            // left print
            if(left<=right){
            for(int i=bottom; i>=top; i--){
                ans.push_back(matrix[i][left]);
                
            }// for
            left++;
            }// if
         }
         return ans;
    }
};