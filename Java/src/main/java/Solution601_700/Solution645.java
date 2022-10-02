package Solution601_700;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution645 {
    public int[] findErrorNums(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != i + 1){
                int temp = nums[nums[i] - 1];
                nums[nums[i] - 1] = nums[i];
                nums[i] = temp;
                if (nums[i] != nums[nums[i] - 1]){
                    i--;
                }
            }
        }
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != i + 1){
                return new int[]{nums[i], i + 1};
            }
        }
        return new int[2];
    }


    public static void main(String[] args) {
        Solution645 solution645 = new Solution645();
        System.out.println(Arrays.toString(solution645.findErrorNums(new int[]{2, 3, 2})));
    }
}