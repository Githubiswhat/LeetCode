package QuestionBank.Solution301_400;

/**
 * @author windows
 */
public class Solution303 {
    class NumArray {
        private int[] res;

        public NumArray(int[] nums) {
            int len = nums.length;
            res = new int[len + 1];
            res[0] = 0;
            int sum = 0;
            for (int i = 0; i < len; i++) {
                res[i + 1] = sum + nums[i];
                sum += nums[i];
            }
        }

        public int sumRange(int left, int right) {
            return res[right + 1] - res[left];
        }

    }


    public static void main(String[] args) {
        Solution303 solution303 = new Solution303();
    }
}