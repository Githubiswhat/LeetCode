package QuestionBank.Solution701_800;

/**
 * @author windows
 */
public class Solution747 {
    public int dominantIndex(int[] nums) {
        int max = 0;
        int index = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > max){
                max = nums[i];
                index = i;
            }
        }
        int belowMax = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > belowMax && nums[i] != max){
                belowMax = nums[i];
            }
        }
        return max >= belowMax * 2 ? index : -1;
    }


    public static void main(String[] args) {
        Solution747 solution747 = new Solution747();
    }
}