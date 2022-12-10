package QuestionBank.Solution1901_2000;
/**
 * @author windows
 */
public class Solution1929 {
    public int[] getConcatenation(int[] nums) {
        int len = nums.length;
        int[] res = new int[len];
        for (int i = 0; i < nums.length; i++) {
            res[i] = nums[i];
            res[i + len] = nums[i];
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1929 solution1929 = new Solution1929();
    }
}