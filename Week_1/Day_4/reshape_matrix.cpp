class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r * c != mat.size() * mat[0].size())     return mat;
        vector<vector<int>> matrix(r, vector<int>(c));
        int p = 0, q = 0;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                matrix[p][q] = mat[i][j];
                if(q != c - 1){
                    q++;
                }
                else{
                    q = 0;
                    p++;
                }
            }
        }
        return matrix;
    }
};