class Solution {
public:
    int findMinX(vector<vector<int>> grid){
        int minX = grid.size();
        size_t rows = grid.size();
        size_t cols = (rows > 0) ? grid[0].size() : 0;
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                if(grid[i][j] == 1 && i<minX)
                {
                    minX = i;
                }
            }
        }
        return minX;
    }
    int findMaxX(vector<vector<int>> grid){
        int minX = 0;
        size_t rows = grid.size();
        size_t cols = (rows > 0) ? grid[0].size() : 0;
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                if(grid[i][j] == 1 && i>minX)
                {
                    minX = i;
                }
            }
        }
        return minX;
    }
    int findMinY(vector<vector<int>> grid){
        size_t rows = grid.size();
        int minX = (rows > 0) ? grid[0].size() : 0;
        size_t cols = (rows > 0) ? grid[0].size() : 0;
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                if(grid[i][j] == 1 && j<minX)
                {
                    minX = j;
                }
            }
        }
        return minX;
    }
    int findMaxY(vector<vector<int>> grid){
        int minX =0;
        size_t rows = grid.size();
        size_t cols = (rows > 0) ? grid[0].size() : 0;
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                if(grid[i][j] == 1 && j>minX)
                {
                    minX = j;
                }
            }
        }
        return minX;
    }
    int minimumArea(vector<vector<int>>& grid) {
        int a = findMaxX(grid)-findMinX(grid)+1;
        int b = findMaxY(grid)-findMinY(grid)+1;
        return(a*b);
    }
};