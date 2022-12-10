package QuestionBank.Solution101_200;

/**
 * @author windows
 */
public class Solution136 {
    public int singleNumber(int[] nums) {
        int num = nums[0];
        for (int i = 1; i < nums.length; i++) {
            num = nums[i] ^ num;
        }
        return num;
    }


    public static void main(String[] args) {
        Solution136 solution136 = new Solution136();
    }
}