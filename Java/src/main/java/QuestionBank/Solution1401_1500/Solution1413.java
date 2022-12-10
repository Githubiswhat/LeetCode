package QuestionBank.Solution1401_1500;
/**
 * @author windows
 */
public class Solution1413 {
    public int minStartValue(int[] nums) {
        int minSum = Integer.MAX_VALUE;
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            minSum = Math.min(minSum, sum);
        }
        if (minSum <= 0){
            return Math.abs(minSum) + 1;
        }
        return 1;
    }
    
    
    public static void main(String[] args) {
        Solution1413 solution1413 = new Solution1413();
    }
}