package Solution901_1000;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution976 {
    public int largestPerimeter(int[] nums) {
        Arrays.sort(nums);
        for (int i = nums.length - 1; i > 1; i--) {
            for (int j = i - 1; j > 0; j--) {
                for (int k = j - 1; k >= 0 ; k--) {
                    if (nums[j] + nums[k] > nums[i]){
                        return nums[j] + nums[k] + nums[i];
                    }
                }
            }
        }
        return 0;
    }


    public static void main(String[] args) {
        Solution976 solution976 = new Solution976();
    }
}