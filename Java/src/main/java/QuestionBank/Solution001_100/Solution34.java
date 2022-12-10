package QuestionBank.Solution001_100;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution34 {
    public int[] searchRange(int[] nums, int target) {
        int[] res = new int[]{-1, -1};
        if (nums.length == 0){
            return res;
        }
        Arrays.sort(nums);
        int left = -1;
        int right = nums.length;
        while (left + 1!= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid;
            }else{
                right = mid;
            }
        }
        if (nums[right] == target){
            res[0] = right;
        }
        left = -1;
        right = nums.length;
        while (left + 1 != right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid;
            }else{
                right = mid;
            }
        }
        if (nums[left] == target){
            res[1] = left;
        }
        return res;
    }


    public static void main(String[] args) {
        Solution34 solution34 = new Solution34();
        System.out.println(Arrays.toString(solution34.searchRange(new int[]{5, 7, 7, 8, 8, 10}, 6)));
    }
}