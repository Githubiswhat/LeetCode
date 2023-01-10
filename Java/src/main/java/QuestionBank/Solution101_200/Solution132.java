package QuestionBank.Solution101_200;

/**
 * @author windows
 */
public class Solution132 {
    public int minCut(String s) {
        int n = s.length();
        boolean[][] g = new boolean[n + 1][n + 1];
        for (int r = 1; r < n + 1; r++) {
            for (int l = r; l >= 1; l--) {
                if (l == r){
                    g[l][r] = true;
                }else {
                    if (s.charAt(l - 1) == s.charAt(r - 1)){
                        if (r - l == 1 || g[l + 1][r - 1]){
                            g[l][r] = true;
                        }
                    }
                }
            }
        }
        int[] f = new int[n + 1];
        for (int r = 1; r < n + 1; r++) {
            if (g[1][r]){
                f[r] = 0;
            }else {
                f[r] = r - 1;
                for (int l = 1; l <= r; l++) {
                    if (g[l][r]){
                        f[r] = Math.min(f[r], f[l - 1] + 1);
                    }
                }
            }
        }
        return f[n];
    }




    public static void main(String[] args) {
        Solution132 solution132 = new Solution132();
        System.out.println(solution132.minCut("aab"));
    }
}