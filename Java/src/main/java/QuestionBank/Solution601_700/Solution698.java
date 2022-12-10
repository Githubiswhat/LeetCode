package QuestionBank.Solution601_700;

/**
 * @author windows
 */
public class Solution698 {
    public static void main(String[] args) {
        Solution698 solution698 = new Solution698();
        boolean b = solution698.canPartitionKSubsets(new int[]{1, 1, 1, 1, 2, 2, 2, 2}, 2);
        System.out.println(b);
    }

    public boolean canPartitionKSubsets(int[] nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
        }
        if (sum % k != 0) {
            return false;
        }
        int num = sum / k;
        return false;
    }

}