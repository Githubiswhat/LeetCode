package QuestionBank.Solution1601_1700;
/**
 * @author windows
 */
public class Solution1672 {
    public int maximumWealth(int[][] accounts) {
        int max = 0;
        for (int i = 0; i < accounts.length; i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].length; j++) {
                sum += accounts[i][j];
            }
            max = Math.max(max, sum);
        }
        return max;
    }
    
    
    public static void main(String[] args) {
        Solution1672 solution1672 = new Solution1672();
    }
}