package Solution901_1000;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution910 {
    public int smallestRangeII(int[] nums, int k) {
        Arrays.sort(nums);
        int sub = nums[nums.length - 1] - nums[0];
        int max = nums[nums.length - 1];
        int min = nums[0];
        int middle = (max + min) / 2;
        if (sub < k + k) {
            for (int i = 0; i < nums.length; i++) {
                if (nums[i] > middle){
                    nums[i] -= k;
                }else{
                    nums[i] += k;
                }
            }
            Arrays.sort(nums);
            return nums[nums.length - 1] - nums[0];
        }
        return sub - k - k;
    }


    public static void main(String[] args) {
        Solution910 solution910 = new Solution910();
    }
}