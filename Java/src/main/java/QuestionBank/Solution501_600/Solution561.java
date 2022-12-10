package QuestionBank.Solution501_600;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution561 {
    public int arrayPairSum(int[] nums) {
        Arrays.sort(nums);
        int sum = 0;
        for (int i = 0; i < nums.length; i+=2) {
            sum += nums[i];
        }
        return sum;
    }


    public static void main(String[] args) {
        Solution561 solution561 = new Solution561();
    }
}