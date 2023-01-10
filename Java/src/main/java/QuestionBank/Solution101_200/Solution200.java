package QuestionBank.Solution101_200;

/**
 * @author windows
 */
public class Solution200 {
    public int numIslands(char[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1'){
                    dfs(grid, i , j);
                    count++;
                }
            }
        }
        return count;
    }

    private void dfs(char[][] grid, int x, int y){
        if (x < 0 || y < 0 || x >= grid.length || y >= grid[0].length || grid[x][y] == '0'){
            return;
        }
        grid[x][y] = '0';
        int[][] dirs = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
        for (int i = 0; i < dirs.length; i++) {
            int newX = x + dirs[i][0];
            int newY = y + dirs[i][1];
            dfs(grid, newX, newY);
        }
    }


    public static void main(String[] args) {
        Solution200 solution200 = new Solution200();
    }
}