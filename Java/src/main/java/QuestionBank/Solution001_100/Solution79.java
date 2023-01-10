package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution79 {

    public boolean exist(char[][] board, String word) {
        int m = board.length;
        int n = board[0].length;
        boolean[][] visited = new boolean[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (check(board, word, visited, 0, i, j)){
                    return true;
                }
            }
        }
        return false;
    }

    private boolean check(char[][] board, String word, boolean[][] visited, int k, int i, int j) {
        if (board[i][j] != word.charAt(k)) {
            return false;
        }else if (k == word.length() - 1) {
            return true;
        }
        visited[i][j] = true;
        int[][] directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
        for (int[] dir : directions) {
            int newI = i + dir[0], newJ = j + dir[1];
            if (newI >= 0 && newJ >= 0 && newI < board.length && newJ < board[0].length) {
                if (!visited[newI][newJ] && check(board, word, visited, k + 1, newI, newJ)){
                    return true;
                }
            }
        }
        visited[i][j] = false;
        return false;
    }


    public static void main(String[] args) {
        Solution79 solution79 = new Solution79();
    }
}