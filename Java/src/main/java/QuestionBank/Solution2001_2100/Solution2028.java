package QuestionBank.Solution2001_2100;
/**
 * @author windows
 */
public class Solution2028 {
    public int[] missingRolls(int[] rolls, int mean, int n) {
        int sum = 0;
        int m = rolls.length;
        for (int i = 0; i < m; i++) {
            sum += rolls[i];
        }
        int total = (m + n) * mean;
        int sub = total - sum;
        if (sub > n * 6 || sub < n){
            return new int[0];
        }
        int a = sub / n;
        int b = sub % n;
        int[] res = new int[n];
        for (int i = 0; i < n; i++) {
            if (b > 0){
                res[i]++;
                b--;
            }
            res[i] += a;
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution2028 solution2028 = new Solution2028();
    }
}