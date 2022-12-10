package QuestionBank.Solution601_700;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution628 {
    public int maximumProduct(int[] nums) {
        Arrays.sort(nums);
        int len = nums.length;
        return nums[len - 1] * nums[len - 2] * nums[len - 3];
    }


    public static void main(String[] args) {
        Solution628 solution628 = new Solution628();
    }
}