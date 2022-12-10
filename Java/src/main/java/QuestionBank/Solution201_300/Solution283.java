package QuestionBank.Solution201_300;

/**
 * @author windows
 */
public class Solution283 {

    public void moveZeroes(int[] nums) {
        int right = nums.length - 1;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 0){
                for (int j = i + 1; j < nums.length; j++) {
                    if (nums[j] != 0){
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        right = j;
                        break;
                    }
                }
            }
        }
    }


    public static void main(String[] args) {
        Solution283 solution283 = new Solution283();
    }
}