package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution27 {
    public int removeElement(int[] nums, int val) {
        int left = 0;
        for (int i = 0; i < nums.length; i++) {
           if (nums[i] != val){
               nums[left] = nums[i];
               left++;
           }
        }
        return left;
    }


    public static void main(String[] args) {
        Solution27 solution27 = new Solution27();
    }
}