package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution45 {
    public int jump(int[] nums) {
        int board = 0;
        int step = 0;
        int maxLen = 0;
        for (int i = 0; i < nums.length; i++) {
            maxLen = Math.max(maxLen, i + nums[i]);
            if (i == board){
                board = maxLen;
                step++;
            }
        }
        return step;
    }


    public static void main(String[] args) {
        Solution45 solution45 = new Solution45();
    }
}