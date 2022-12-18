package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution33 {
    public int search(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        int n = nums.length;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if (nums[mid] == target){
                return mid;
            }
            if (nums[0] <= nums[mid]){
                if (nums[0] <= target && target < nums[mid]){
                    right = mid - 1;
                }else {
                    left = mid + 1;
                }
            }else {
                if (nums[mid] < target && target <= nums[n - 1]){
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
            }
        }
        return -1;
    }


    public static void main(String[] args) {
        Solution33 solution33 = new Solution33();
        System.out.println(solution33.search(new int[]{3, 5 ,1}, 3));
    }
}