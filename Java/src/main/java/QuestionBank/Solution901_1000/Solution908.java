package QuestionBank.Solution901_1000;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution908 {
    public int smallestRangeI(int[] nums, int k) {
        Arrays.sort(nums);
        int sub = nums[nums.length - 1] - nums[0];
        if (sub < k + k) {
            return 0;
        }
        return sub - k - k;
    }


    public static void main(String[] args) {
        Solution908 solution908 = new Solution908();
    }
}