package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution26 {
    public int removeDuplicates(int[] nums) {
        int left = 0;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[left]) {
                left++;
                nums[left] = nums[i];
            }
        }
        return left + 1;
    }


    public static void main(String[] args) {
        Solution26 solution26 = new Solution26();
        System.out.println(solution26.removeDuplicates(new int[]{1, 1, 2}));
    }
}