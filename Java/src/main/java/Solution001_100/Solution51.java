package Solution001_100;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution51 {
    public List<List<String>> solveNQueens(int n) {
        char[][] chars = new char[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                chars[i][j] = '.';
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

            }
        }
        return new ArrayList<List<String>>();
    }

    private List<List<String>> solveNQueens(char[][] chars, int depth) {
        int n = chars.length;
        if (depth >= n){
            return new ArrayList<List<String>>();
        }
        for (int i = 0; i < n; i++) {
            if (canPutHere(chars, i, depth)){
                chars[depth][i] = 'Q';
                solveNQueens(chars, depth + 1);
                chars[depth][i] = '.';
            }
        }
        return null;
    }

    private boolean canPutHere(char[][] chars, int index, int depth) {
        for (int i = 0; i < index; i++) {
            if (chars[i][index] == 'Q'){
                return false;
            }
        }
        return true;
    }



    public static void main(String[] args) {
        Solution51 solution51 = new Solution51();
    }
}