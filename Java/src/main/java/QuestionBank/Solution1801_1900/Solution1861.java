package QuestionBank.Solution1801_1900;
/**
 * @author windows
 */
public class Solution1861 {
    public char[][] rotateTheBox(char[][] box) {
        int m = box.length;
        int n = box[0].length;
        for (int i = 0; i < m; i++) {
            for (int j = n - 2; j >= 0; j--) {
                if (box[i][j + 1] == '.' && box[i][j] == '#') {
                    box[i][j + 1] = '#';
                    box[i][j] = '.';
                }
            }
        }
        char[][] res = new char[n][m];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                res[j][m - i - 1] = box[i][j];
            }
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1861 solution1861 = new Solution1861();
        System.out.println(solution1861.rotateTheBox(new char[][]{{'#', '.', '*', '.'},
                {'#', '#', '*', '.'}}));
    }
}