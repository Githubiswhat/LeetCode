package QuestionBank.Solution701_800;

/**
 * @author windows
 */
public class Solution724 {
    public int pivotIndex(int[] nums) {
        int left = 0;
        int right = 0;
        for (int i = 1; i < nums.length; i++) {
            right += nums[i];
        }
        int i = 0;
        while (left != right && i < nums.length - 1) {
            i++;
            left += nums[i - 1];
            right -= nums[i];
        }
        if (left == right){
            return i;
        }
        return -1;
    }


    public static void main(String[] args) {
        Solution724 solution724 = new Solution724();
        int index = solution724.pivotIndex(new int[]{1, 2, 3});
        System.out.println(index);
    }
}