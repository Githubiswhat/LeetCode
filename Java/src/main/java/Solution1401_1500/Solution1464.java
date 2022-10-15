package Solution1401_1500;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution1464 {
    public int maxProduct(int[] nums) {
        Arrays.sort(nums);
        int len = nums.length;
        return (nums[len -1] - 1) * (nums[len - 2] - 1);
    }
    
    
    public static void main(String[] args) {
        Solution1464 solution1464 = new Solution1464();
    }
}