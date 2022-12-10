package QuestionBank.Solution1901_2000;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution1913 {
    public int maxProductDifference(int[] nums) {
        Arrays.sort(nums);
        int min = nums[0];
        int secMin = nums[1];
        int max = nums[nums.length - 1];
        int secMax = nums[nums.length - 2];
        return max * secMax - min * secMin;
    }
    
    
    public static void main(String[] args) {
        Solution1913 solution1913 = new Solution1913();
    }
}