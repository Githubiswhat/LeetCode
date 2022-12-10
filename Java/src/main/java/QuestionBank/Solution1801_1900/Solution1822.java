package QuestionBank.Solution1801_1900;
/**
 * @author windows
 */
public class Solution1822 {
    public int arraySign(int[] nums) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < 0){
                count++;
            }else if (nums[i] == 0){
                return 0;
            }
        }
        return count % 2 == 0 ? 1 : -1;
    }
    
    
    public static void main(String[] args) {
        Solution1822 solution1822 = new Solution1822();
    }
}