#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> delRow = {-1, 0, 1, 0};
    vector<int> delCol = {0, 1, 0, -1};

    bool isValid(int &i, int &j, int &n, int &m){
        if (i < 0 || i >= n) return false;
        if (j < 0 || j >= m) return false;

        return true;
    }

    int orangesRotting(vector<vector<int>> &grid) {
       int n = grid.size();
       int m = grid[0].size();

       int time = 0;

       int total = 0; //count of oranges

       int count = 0; //count of rotten oranges

       queue<pair<int, int>> q;

       for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (grid[i][j] != 0) total++;

            if (grid[i][j] == 2){
                q.push({i, j});
            }
        }
       }
       while (!q.empty()){
            int k = q.size();
            count += k;

            while (k--){
                auto cell = q.front();
                q.pop();

                int row = cell.first;
                int col = cell.second;

                for (int i = 0; i<4; i++){

                    int nrow = row + delRow[i];
                    int ncol = col + delCol[i];

                    if (isValid(nrow, ncol, n, m) 
                    && grid[nrow][ncol] == 1){
                        grid[nrow][ncol] = 2;
                        q.push({nrow, ncol});
                    }
                }
            }
            if(!q.empty()) time++;
       }
        if (total == count) return time;
        return -1;
        
    }
};