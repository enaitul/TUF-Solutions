class Solution {
   public:
    vector<int> delrow = {-1, 0, 1, 0};
    vector<int> delcol = {0, 1, 0, -1};

    bool isvalid(int &i, int &j, int &n, int &m) {
        if (i < 0 || i >= n) return false;
        if (j < 0 || j >= m) return false;
        return true;
    }

    void dfs(int row, int col, vector<vector<int>> &vis,
             vector<vector<char>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        vis[row][col] = 1;
        for (int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if (isvalid(nrow, ncol, n, m) && !vis[nrow][ncol] &&
                mat[nrow][ncol] == 'O') {
                dfs(nrow, ncol, vis, mat);
            }
        }
    }
    vector<vector<char>> fill(vector<vector<char>> mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int j = 0; j < m; j++) {
            if (mat[0][j] == 'O' && !vis[0][j]) {
                dfs(0, j, vis, mat);
            }

            if (mat[n-1][j] == 'O' && !vis[n-1][j]){
                dfs(n-1, j, vis, mat);
            }
        }

        for (int i = 0; i< n; i++){
            if (mat[i][0]=='O' && !vis[i][0]){
                dfs (i, 0, vis, mat);
            }
            if (mat[i][m-1]=='O' && !vis[i][m-1]){
                dfs (i, m-1, vis, mat);
            }
        }

        for (int i = 0; i< n; i++){
            for (int j = 0; j< m; j++){
                if (!vis[i][j] && mat[i][j] =='O'){
                    mat[i][j] = 'X';
                }
            }
        }
        return mat;
    }
};