package QuestionBank.Solution1701_1800;
/**
 * @author windows
 */
public class Solution1800 {
    public int maxAscendingSum(int[] nums) {
        int sum = nums[0];
        int maxSum = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] > nums[i - 1]){
                sum += nums[i];
                maxSum = Math.max(sum, maxSum);
            }else{
                sum = nums[i];
            }
        }
        return maxSum;
    }
    
    
    public static void main(String[] args) {
        Solution1800 solution1800 = new Solution1800();
    }
}