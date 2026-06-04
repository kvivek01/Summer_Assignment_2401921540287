class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();

        int top = 0, down = row - 1;
        int left = 0, right = column - 1;

        int dir = 0;
        vector <int> spiral_mat;
        while(top <= down && left <= right){
            if(dir == 0){
                for(int i = left; i <= right; i++){
                    spiral_mat.push_back(matrix[top][i]);
                }
                top++;
                dir++;
            }
            else if(dir == 1){
                for(int i = top; i <= down; i++){
                    spiral_mat.push_back(matrix[i][right]);
                }
                right--;
                dir++;
            }
            else if(dir == 2){
                if(top <= down){
                    for(int i = right; i >= left; i--){
                        spiral_mat.push_back(matrix[down][i]);
                    }
                    down--;
                }
                dir++;
            }
            else if(dir == 3){
                if(left <= right){
                    for(int i = down; i >= top ; i--){
                        spiral_mat.push_back(matrix[i][left]);
                    }
                    left++;
                }
                dir = 0;
            }
        }
        return spiral_mat;
    }
};