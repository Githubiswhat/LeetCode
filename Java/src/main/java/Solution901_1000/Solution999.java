package Solution901_1000;

/**
 * @author windows
 */
public class Solution999 {
    public int numRookCaptures(char[][] board) {
        int[] pos = new int[2];
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[i].length; j++) {
                if (board[i][j] == 'R'){
                    pos[0] = i;
                    pos[1] = j;
                    break;
                }
            }
        }
        int count = 0;
        for (int i = pos[0]; i >= 0; i--) {
            if (board[i][pos[1]] == 'B'){
                break;
            }else if(board[i][pos[1]] == 'p'){
                count++;
                break;
            }
        }
        for (int i = pos[0]; i < board.length; i++) {
            if (board[i][pos[1]] == 'B'){
                break;
            }else if(board[i][pos[1]] == 'p'){
                count++;
                break;
            }
        }
        for (int i = pos[1]; i >= 0; i--) {
            if (board[pos[0]][i] == 'B'){
                break;
            }else if(board[pos[0]][i] == 'p'){
                count++;
                break;
            }
        }
        for (int i = pos[1]; i < board[0].length; i++) {
            if (board[pos[0]][i] == 'B'){
                break;
            }else if(board[pos[0]][i] == 'p'){
                count++;
                break;
            }
        }
        return count;
    }


    public static void main(String[] args) {
        Solution999 solution999 = new Solution999();
    }
}