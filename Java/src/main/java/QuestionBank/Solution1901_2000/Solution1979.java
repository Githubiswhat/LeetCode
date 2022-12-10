package QuestionBank.Solution1901_2000;

/**
 * @author windows
 */
public class Solution1979 {
    public static void main(String[] args) {
        Solution1979 solution1979 = new Solution1979();
    }

    public int findGCD(int[] nums) {
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length; i++) {
            max = Math.max(max, nums[i]);
            min = Math.min(min, nums[i]);
        }
        int z = 0;
        while (max % min != 0) {
            z = max % min;
            max = min;
            min = z;
        }
        return min;
    }
}