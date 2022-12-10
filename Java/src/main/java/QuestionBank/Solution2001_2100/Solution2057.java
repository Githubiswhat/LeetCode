package QuestionBank.Solution2001_2100;
/**
 * @author windows
 */
public class Solution2057 {
    public int smallestEqual(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            if (i % 10 == nums[i]){
                return i;
            }
        }
        return -1;
    }
    
    
    public static void main(String[] args) {
        Solution2057 solution2057 = new Solution2057();
    }
}