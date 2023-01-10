package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution75 {
    public void sortColors(int[] nums) {
        int left = 0;
        for (int i = 0; i < nums.length; i++) {
            if(nums[i] == 0){
                int temp = nums[i];
                nums[i] = nums[left];
                nums[left] = temp;
                left++;
            }
        }
        int right = nums.length - 1;
        for (int i = nums.length - 1; i >= 0; i--) {
            if (nums[i] == 2){
                int temp = nums[i];
                nums[i] = nums[right];
                nums[right] = temp;
                right--;
            }
        }
    }


    public static void main(String[] args) {
        Solution75 solution75 = new Solution75();
        solution75.sortColors(new int[] {2,0,2,1,1,0});
    }
}