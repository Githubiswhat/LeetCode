package QuestionBank.Solution1901_2000;
/**
 * @author windows
 */
public class Solution1991 {
    public int findMiddleIndex(int[] nums) {
        int sumLeft = 0;
        int sumRight = 0;
        for (int i = 1; i < nums.length; i++) {
            sumRight += nums[i];
        }
        if (sumLeft == sumRight){
            return 0;
        }
        for (int i = 1; i < nums.length; i++) {
            sumLeft += nums[i - 1];
            sumRight -= nums[i];
            if (sumLeft == sumRight){
                return i;
            }
        }
        return -1;
    }
    
    
    public static void main(String[] args) {
        Solution1991 solution1991 = new Solution1991();
    }
}