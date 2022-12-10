package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution35 {

    public int searchInsert(int[] nums, int target) {
        int left = - 1;
        int right = nums.length;
        int middle = -1;
        while(left != right - 1) {
            middle = (left + right) / 2;
            if (nums[middle] == target) {
                return middle;
            }else if (nums[middle] < target) {
                left = middle;
            }else{
                right = middle;
            }
        }
        return right;
    }

    public static void main(String[] args) {
        Solution35 solution35 = new Solution35();
        System.out.println(solution35.searchInsert(new int[]{1, 3, 5, 6}, 2));
    }
}