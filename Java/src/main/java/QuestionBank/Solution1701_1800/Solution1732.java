package QuestionBank.Solution1701_1800;
/**
 * @author windows
 */
public class Solution1732 {
    public int largestAltitude(int[] gain) {
        int sum = 0;
        int maxSum = 0;
        for (int i = 0; i < gain.length; i++) {
            sum += gain[i];
            maxSum = Math.max(maxSum, sum);
        }
        return maxSum;
    }
    
    
    public static void main(String[] args) {
        Solution1732 solution1732 = new Solution1732();
    }
}