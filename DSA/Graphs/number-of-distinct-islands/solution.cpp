class Solution {
   public:
    vector<int> delrow = {-1, 0, 1, 0};
    vector<int> delcol = {0, -1, 0, 1};

    /* Helper function to check if a
    cell is within boundaries */
    bool isValid(int &i, int &j, int &n, int &m) {
        // Return false if cell is invalid
        if (i < 0 || i >= n) return false;
        if (j < 0 || j >= m) return false;

        // Return true if cell is valid
        return true;
    }

    void dfs(int row, int col, vector<vector<int>> &grid, vector<vector<bool>> &visited, vector<pair<int, int>> &path, int &base_row, int &base_col){
        int n = grid.size();
        int m = grid[0].size();

        path.push_back({row - base_row, col - base_col});

        for (int i = 0; i< 4; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if (isValid(nrow, ncol, n, m) && grid[nrow][ncol] == 1 && !visited[nrow][ncol]){
                visited[nrow][ncol] = true;

                dfs(nrow, ncol, grid, visited, path, base_row, base_col);
            }
        }
        return;
    }
    int countDistinctIslands(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n, vector<bool>(m, false));

        set<vector<pair<int, int>>> st;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && !visited[i][j]) {
                    visited[i][j] = true;
                    vector<pair<int, int>> path;
                    dfs(i, j, grid, visited, path, i, j);

                    st.insert(path);
                }
            }
        }
        return st.size();
    }
};
