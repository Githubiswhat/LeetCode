package QuestionBank.Solution2301_2400;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution2357 {
    public int minimumOperations(int[] nums) {
        int min = -1;
        Arrays.sort(nums);
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                for (int j = i + 1; j < nums.length; j++) {
                    nums[j] -= nums[i];
                }
                nums[i] = 0;
                count++;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution2357 solution2357 = new Solution2357();
    }
}