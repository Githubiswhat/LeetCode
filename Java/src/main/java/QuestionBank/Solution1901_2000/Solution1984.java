package QuestionBank.Solution1901_2000;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution1984 {
    public int minimumDifference(int[] nums, int k) {
        if (nums.length == 1){
            return 0;
        }
        Arrays.sort(nums);
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length - k + 1; i++) {
            int a = nums[i];
            int b = nums[i + k - 1];
            min = Math.min(min, b - a);
        }
        return min;
    }
    
    
    public static void main(String[] args) {
        Solution1984 solution1984 = new Solution1984();
    }
}