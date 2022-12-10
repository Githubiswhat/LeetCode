package QuestionBank.Solution101_200;

/**
 * @author windows
 */
public class Solution198 {
    public static void main(String[] args) {
        Solution198 solution198 = new Solution198();
        System.out.println(solution198.rob(new int[]{114, 117, 207, 117, 235, 82, 90, 67, 143, 146, 129, 64, 214, 228, 78, 188, 67, 205, 94, 205, 169, 241, 202, 144, 240, 117, 207, 117, 235, 82, 90, 67, 143, 146, 129, 64, 214, 228, 78, 188, 67, 205, 94, 205, 169, 241, 202, 144, 240}));
    }

    public int rob(int[] nums) {
        boolean[] df = new boolean[nums.length + 1];
        return df(nums, 0, 0, df);
    }

    private int df(int[] nums, int sum, int begin, boolean[] df) {
        if (begin >= nums.length) {
            return sum;
        }
        int selected = 0;
        if (df[begin] != true) {
            df[begin] = true;
            selected = df(nums, sum + nums[begin], begin + 2, df);
            df[begin] = false;
        }
        int unSelect = df(nums, sum, begin + 1, df);
        return Math.max(selected, unSelect);
    }
}