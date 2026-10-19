class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int perimeter = 0;

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j] == 1) {
                    // check top
                    if(i == 0 || grid[i-1][j] == 0) perimeter++;
                    // check bottom
                    if(i == row-1 || grid[i+1][j] == 0) perimeter++;
                    // check left
                    if(j == 0 || grid[i][j-1] == 0) perimeter++;
                    // check right
                    if(j == col-1 || grid[i][j+1] == 0) perimeter++;
                }
            }
        }

        return perimeter;
    }
};
