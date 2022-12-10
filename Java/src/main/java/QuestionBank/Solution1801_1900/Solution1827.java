package QuestionBank.Solution1801_1900;

/**
 * @author windows
 */
public class Solution1827 {
    public int minOperations(int[] nums) {
        int sum = 0;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] <= nums[i - 1]){
                sum += nums[i - 1] - nums[i] + 1;
                nums[i] = nums[i - 1] + 1;
            }
        }
        return sum;
    }
    
    
    public static void main(String[] args) {
        Solution1827 solution1827 = new Solution1827();
        System.out.println(solution1827.minOperations(new int[]{1, 5, 2, 4, 1}));
    }
}