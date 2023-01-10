package QuestionBank.Solution101_200;

/**
 * @author windows
 */
public class Solution189 {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        int[] res = new int[n];
        k = k % n;
        for (int i = 0; i < n; i++) {
            int idx = (i + k) % n;
            res[i] = nums[idx];
        }
        for (int i = 0; i < n; i++) {
            nums[i] = res[i];
        }
    }


    public static void main(String[] args) {
        Solution189 solution189 = new Solution189();
    }
}