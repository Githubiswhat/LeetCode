package QuestionBank.Solution201_300;

/**
 * @author windows
 */
public class Solution213 {
    public int rob(int[] nums) {
        int n = nums.length;
        if (n == 1){
            return nums[0];
        }else if (n == 2) {
            return Math.max(nums[0], nums[1]);
        }
        return Math.max(rob(nums, 0, n - 1), rob(nums, 1, n));
    }

    private int rob(int[] nums, int begin, int end) {
        int first = nums[begin], second = Math.max(nums[begin], nums[begin + 1]);
        for (int i = begin + 2; i < end; i++) {
            int temp = second;
            second = Math.max(first + nums[i], second);
            first = temp;
        }
        return Math.max(first, second);
    }


    public static void main(String[] args) {
        Solution213 solution213 = new Solution213();
    }
}