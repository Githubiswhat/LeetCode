package QuestionBank.Solution1301_1400;
/**
 * @author windows
 */
public class Solution1304 {
    public int[] sumZero(int n) {
        int[] res = new int[n];
        int index = 0;
        for (int i = 1; i <= n / 2; i++) {
            res[index++] = i;
            res[index++] = -i;
        }
        if (n % 2 != 0){
            res[index] = 0;
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1304 solution1304 = new Solution1304();
    }
}