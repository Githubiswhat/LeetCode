package QuestionBank.Solution201_300;

/**
 * @author windows
 */
public class Solution238 {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int p = 1;
        int q = 1;
        int[] res = new int[n];
        for (int i = 0; i < n; i++) {
            res[i] = p;
            p = p * nums[i];
        }
        for (int i = n - 1; i > 0 ; i--) {
            q = q * nums[i];
            res[i - 1] *= q;
        }
        return res;
    }


    public static void main(String[] args) {
        Solution238 solution238 = new Solution238();
    }
}