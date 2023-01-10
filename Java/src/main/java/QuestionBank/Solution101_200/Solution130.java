package QuestionBank.Solution101_200;

/**
 * @author windows
 */
public class Solution130 {
    public void solve(char[][] board) {
        int m = board.length;
        int n = board[0].length;
        for (int i = 0; i < m; i++) {
            dfs(board, i , 0);
            dfs(board, i , n - 1);
        }
        for (int i = 0; i < n; i++) {
            dfs(board, 0 , i);
            dfs(board, m - 1 , i);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'A'){
                    board[i][j] = 'O';
                }else if (board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }

    private void dfs(char[][] board, int x, int y){
        if (x < 0 || y < 0 || x >= board.length || y >= board[0].length || board[x][y] != 'O'){
            return;
        }
        board[x][y] = 'A';
        dfs(board, x + 1, y);
        dfs(board, x - 1, y);
        dfs(board, x, y + 1);
        dfs(board, x, y - 1);
    }

    public static void main(String[] args) {
        Solution130 solution130 = new Solution130();
        solution130.solve(new char[][]{{'X','O','X','O','X','O'},{'O','X','O','X','O','X'},{'X','O','X','O','X','O'},{'O','X','O','X','O','X'}});
    }
}