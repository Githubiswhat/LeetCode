package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution59 {
    public int[][] generateMatrix(int n) {
        int n2 = n * n;
        int[][] res = new int[n][n];
        int t = 0, l = 0, d = n - 1, r = n -1;
        int num = 1;
        while (num <= n2) {
            for (int i = l; i <= r; i++) {
                res[t][i] = num++;
            }
            t++;
            for (int i = t; i <= d; i++) {
                res[i][r] = num++;
            }
            r--;
            for (int i = r; i >= l; i--) {
                res[d][i] = num++;
            }
            d--;
            for (int i = d; i >= t; i--) {
                res[i][l] = num++;
            }
            l++;
        }
        return res;
    }


    public static void main(String[] args) {
        Solution59 solution59 = new Solution59();
    }
}