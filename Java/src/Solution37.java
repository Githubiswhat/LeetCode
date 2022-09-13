import java.util.*;

/**
 * @author windows
 */
public class Solution37 {
//    public void solveSudoku(char[][] board) {
//        List<Set<Integer>> row = new ArrayList(9);
//        List<Set<Integer>> col = new ArrayList(9);
//        List<Set<Integer>> cube = new ArrayList(9);
//        for (int i = 0; i < 9; i++) {
//            Set<Integer> rowSet = new HashSet<>();
//            Set<Integer> colSet = new HashSet<>();
//            Set<Integer> cubeSet = new HashSet<>();
//            row.add(rowSet);
//            col.add(colSet);
//            cube.add(cubeSet);
//        }
//        int width = board[0].length;
//        int height = board.length;
//        int count = 0;
//        for (int i = 0; i < width; i++) {
//            for (int j = 0; j < height; j++) {
//                if (board[i][j] != '.'){
//                    Set<Integer> rowSet = row.get(i);
//                    rowSet.add(board[i][j] - '0');
//                    count++;
//                }
//                if (board[j][i] != '.'){
//                    Set<Integer> colSet = col.get(i);
//                    colSet.add(board[j][i] - '0');
//                }
//                int cubeX = 3 * (i / 3) + (j / 3);
//                int cubeY = 3 * (i % 3) + (j % 3);
//                if (board[cubeX][cubeY] != '.'){
//                    Set<Integer> cubeSet = cube.get(i);
//                    cubeSet.add(board[cubeX][cubeY] - '0');
//                }
//            }
//        }
//        System.out.println("aaa");
//        while (count != height * width){
//            for (int i = 0; i < width; i++) {
//                for (int j = 0; j < height; j++) {
//                    if (board[i][j] == '.'){
//                        int cubeX = 3 * (i / 3) + (j / 3);
//                        int cubeY = 3 * (i % 3) + (j % 3);
//                        Set<Integer> rowSet = row.get(i);
//                        Set<Integer> colSet = col.get(j);
//                        Set<Integer> cubeSet = cube.get(cubeX);
//                        int num = 0;
//                        int count1 = 0;
//                        for (int k = 1; k < 10; k++) {
//                            if (rowSet.contains(k) || colSet.contains(k) || cubeSet.contains(k)){
//                                count1++;
//                            }else{
//                                num = k;
//                            }
//                        }
//                        if (count1 == 8){
//                            count++;
//                            board[i][j] = (char) (num + '0');
//                            rowSet.add(num);
//                            colSet.add(num);
//                            cubeSet.add(num);
//                            for (char[] chars : board){
//                                System.out.println(Arrays.toString(chars));
//                            }
//                            System.out.println("======================================");
//                        }
//                    }
//                }
//            }
//        }
//    }


    private boolean[][] line = new boolean[9][9];
    private boolean[][] column = new boolean[9][9];
    private boolean[][][] block = new boolean[3][3][9];
    private boolean valid = false;
    private List<int[]> spaces = new ArrayList<int[]>();

    public void solveSudoku(char[][] board) {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] == '.') {
                    spaces.add(new int[]{i, j});
                } else {
                    int digit = board[i][j] - '0' - 1;
                    line[i][digit] = column[j][digit] = block[i / 3][j / 3][digit] = true;
                }
            }
        }

        dfs(board, 0);
    }

    public void dfs(char[][] board, int pos) {
        if (pos == spaces.size()) {
            valid = true;
            return;
        }

        int[] space = spaces.get(pos);
        int i = space[0], j = space[1];
        for (int digit = 0; digit < 9 && !valid; ++digit) {
            if (!line[i][digit] && !column[j][digit] && !block[i / 3][j / 3][digit]) {
                line[i][digit] = column[j][digit] = block[i / 3][j / 3][digit] = true;
                board[i][j] = (char) (digit + '0' + 1);
                dfs(board, pos + 1);
                line[i][digit] = column[j][digit] = block[i / 3][j / 3][digit] = false;
            }
        }
    }


    public static void main(String[] args) {
//        char[][] board = {{'5','3','.','.','7','.','.','.','.'},
//                          {'6','.','.','1','9','5','.','.','.'},
//                          {'.','9','8','.','.','.','.','6','.'},
//                          {'8','.','.','.','6','.','.','.','3'},
//                          {'4','.','.','8','.','3','.','.','1'},
//                          {'7','.','.','.','2','.','.','.','6'},
//                          {'.','6','.','.','.','.','2','8','.'},
//                          {'.','.','.','4','1','9','.','.','5'},
//                          {'.','.','.','.','8','.','.','7','9'}};
        char[][] board = {{'.','.','9','7','4','8','.','.','.'},
                          {'7','.','.','.','.','.','.','.','.'},
                          {'.','2','.','1','.','9','.','.','.'},
                          {'.','.','7','.','.','.','2','4','.'},
                          {'.','6','4','.','1','.','5','9','.'},
                          {'.','9','8','.','.','.','3','.','.'},
                          {'.','.','.','8','.','3','.','2','.'},
                          {'.','.','.','.','.','.','.','.','6'},
                          {'.','.','.','2','7','5','9','.','.'}};
        Solution37 solution37 = new Solution37();
        solution37.solveSudoku(board);
    }


}
