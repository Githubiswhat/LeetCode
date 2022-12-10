package QuestionBank.Solution1201_1300;
/**
 * @author windows
 */
public class Solution1275 {
    public String tictactoe(int[][] moves) {
        int[][] board = new int[3][3];
        for (int i = 0; i < moves.length; i++) {
            board[moves[i][0]][moves[i][1]] = i % 2 + 1;
        }
        for (int i = 0; i < board.length; i++) {
            if (board[i][0] == 1 && board[i][1] == 1 && board[i][2] == 1){
                return "A";
            }
            if (board[i][0] == 2 && board[i][1] == 2 && board[i][2] == 2){
                return "B";
            }
            if (board[0][i] == 1 && board[1][i] == 1 && board[2][i] == 1){
                return "A";
            }
            if (board[0][i] == 2 && board[1][i] == 2 && board[2][i] == 2){
                return "B";
            }
        }
        if (board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1){
            return "A";
        }
        if (board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 2){
            return "B";
        }
        if (board[2][0] == 1 && board[1][1] == 1 && board[0][2] == 1){
            return "A";
        }
        if (board[2][0] == 2 && board[1][1] == 2 && board[0][2] == 2){
            return "B";
        }
        return moves.length == 9 ? "Draw" : "Pending";
    }
    
    
    public static void main(String[] args) {
        Solution1275 solution1275 = new Solution1275();
    }
}