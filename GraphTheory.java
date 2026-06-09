class Solution {
public:

    int dir[4][2] = {
        {0,-1},
        {0,1},
        {-1,0},
        {1,0}
    };

    void dfs(vector<vector<char>>& grid, int r, int c)
    {
        int R = grid.size();
        int C = grid[0].size();

        grid[r][c] = '0';

        for(int i=0;i<4;i++)
        {
            int nr = r + dir[i][0];
            int nc = c + dir[i][1];

            if(nr>=0 && nr<R &&
               nc>=0 && nc<C &&
               grid[nr][nc]=='1')
            {
                dfs(grid,nr,nc);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid)
    {
        int R = grid.size();
        int C = grid[0].size();

        int islands = 0;

        for(int r=0;r<R;r++)
        {
            for(int c=0;c<C;c++)
            {
                if(grid[r][c]=='1')
                {
                    islands++;
                    dfs(grid,r,c);
                }
            }
        }

        return islands;
    }
};
