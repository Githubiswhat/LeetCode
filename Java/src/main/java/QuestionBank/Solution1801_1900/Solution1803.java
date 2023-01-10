package QuestionBank.Solution1801_1900;
/**
 * @author windows
 */
public class Solution1803 {
    public int countPairs(int[] nums, int low, int high) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                int num = nums[i] ^ nums[j];
                if (num <= high && num >= low) {
                    count++;
                }
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution1803 solution1803 = new Solution1803();
        System.out.println(solution1803.countPairs(new int[]{1, 4, 2, 7}, 2, 6));
    }
}