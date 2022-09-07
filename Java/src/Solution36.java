import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;

class Solution36 {
    public boolean isValidSudoku(char[][] board) {
        int width = board[0].length;
        int height = board.length;
        for (int i = 0; i < height; i++){
            HashSet<Character> row = new HashSet<>();
            HashSet<Character> col = new HashSet<>();
            HashSet<Character> cube = new HashSet<>();
            for (int j = 0; j < width; j++) {
                if (board[i][j] != '.' && row.contains(board[i][j])){
                    return false;
                }else{
                    row.add(board[i][j]);
                }
            }
            for (int j = 0; j < width; j++) {
                if (board[j][i] != '.' && col.contains(board[j][i])){
                    return false;
                }else{
                    col.add(board[j][i]);
                }
            }
            for (int j = 0; j < width; j++) {
                int cubeX = 3 * (i / 3) + (j / 3);
                int cubeY = 3 * (i % 3) + (j % 3);
                if (board[cubeX][cubeY] != '.' && cube.contains(board[cubeX][cubeY])){
                    return false;
                }else{
                    cube.add(board[cubeX][cubeY]);
                }
            }
        }
        return true;
    }
}

