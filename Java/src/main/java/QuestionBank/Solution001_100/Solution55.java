package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution55 {
    public boolean canJump(int[] nums) {
        int max = 0;
        for (int i = 0; i < nums.length; i++) {
            if (max >= i){
                if (i + nums[i] > max) {
                    max = i + nums[i];
                }
            }
        }
        return max > nums.length - 1;
    }


    public static void main(String[] args) {
        Solution55 solution55 = new Solution55();
        System.out.println(solution55.canJump(new int[]{2, 3, 1, 1, 4}));
    }
}