package QuestionBank.Solution901_1000;

/**
 * @author windows
 */
public class Solution905 {
    public int[] sortArrayByParity(int[] nums) {
        int left = 0;
        int right = nums.length - 1;
        while (left < right){
            while (left < right && nums[left] % 2 != 0){
                 int temp = nums[left];
                 nums[left] = nums[right];
                 nums[right] = temp;
                 right--;
            }
            left++;
        }
        return nums;
    }


    public static void main(String[] args) {
        Solution905 solution905 = new Solution905();
    }
}