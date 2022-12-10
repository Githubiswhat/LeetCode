package QuestionBank.Solution1801_1900;
/**
 * @author windows
 */
public class Solution1848 {
    public int getMinDistance(int[] nums, int target, int start) {
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == target){
                min = Math.min(Math.abs(i - target), min);
            }
        }
        return min;
    }
    
    
    public static void main(String[] args) {
        Solution1848 solution1848 = new Solution1848();
    }
}