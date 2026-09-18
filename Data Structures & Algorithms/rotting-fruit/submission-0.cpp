class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        queue<pair<int,int>> q;
        int freshFruit = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 2) {
                    q.push({i,j});
                }
                else if (grid[i][j] == 1) {
                    freshFruit++;
                }
            }
        }

        if (freshFruit == 0) return 0;

        int mins = 0;

        int rdir[] = {-1,1,0,0};
        int cdir[] = {0,0,-1,1};

        while (!q.empty() && freshFruit > 0) {
            int size = q.size();
            mins++;

            for (int i = 0; i < size; i++) {
                auto [r,c] = q.front();
                q.pop();

                for (int d = 0; d < 4; d++) {
                    int newR = r + rdir[d];
                    int newC = c + cdir[d];

                    if (newR >= 0 && newR < row && newC >= 0 && newC < col &&  grid[newR][newC] == 1) {
                        grid[newR][newC] = 2;
                        freshFruit--;
                        q.push({newR,newC});
                    }
                }
            }
        }
        return freshFruit == 0 ? mins : -1;
        
    }
};
