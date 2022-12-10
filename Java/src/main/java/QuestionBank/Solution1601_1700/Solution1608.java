package QuestionBank.Solution1601_1700;
/**
 * @author windows
 */
public class Solution1608 {
    public int specialArray(int[] nums) {
        for (int i = 1; i < nums.length; i++) {
            int count = 0;
            for (int j = 0; j < nums.length; j++) {
                if (nums[j] > i){
                    count++;
                }
            }
            if (count == i) {
                return i;
            }
        }
        return -1;
    }
    
    
    public static void main(String[] args) {
        Solution1608 solution1608 = new Solution1608();
    }
}