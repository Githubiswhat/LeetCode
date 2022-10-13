package Solution901_1000;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution977 {

    public int[] sortedSquares(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            nums[i] = nums[i] * nums[i];
        }
        Arrays.sort(nums);
        return nums;
    }


    public static void main(String[] args) {
        Solution977 solution977 = new Solution977();
    }
}