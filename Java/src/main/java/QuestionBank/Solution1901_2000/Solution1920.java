package QuestionBank.Solution1901_2000;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution1920 {
    public int[] buildArray(int[] nums) {
        int[] ans = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
    
    
    public static void main(String[] args) {
        Solution1920 solution1920 = new Solution1920();
        System.out.println(Arrays.toString(solution1920.buildArray(new int[]{0, 2, 1, 5, 3, 4})));
    }
}