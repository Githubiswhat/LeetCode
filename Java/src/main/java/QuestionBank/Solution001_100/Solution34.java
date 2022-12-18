package QuestionBank.Solution001_100;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution34 {
    public int[] searchRange(int[] nums, int target) {
        if (nums.length == 0){
            return new int[]{-1, -1};
        }
        int left = -1;
        int right = nums.length;
        while(left != right - 1){
            int mid = left + (right - left) / 2;
            if(nums[mid] < target){
                left = mid;
            }else{
                right = mid;
            }
        }
        if (nums[right] != target){
            return new int[]{-1, -1};
        }
        int[] res = new int[2];
        res[0] = right;
        left = -1;
        right = nums.length;
        while(left != right - 1){
            int mid = left + (right - left) / 2;
            if(nums[mid] <= target){
                left = mid;
            }else{
                right = mid;
            }
        }
        res[1] = left;
        return res;
    }


    public static void main(String[] args) {
        Solution34 solution34 = new Solution34();
        System.out.println(Arrays.toString(solution34.searchRange(new int[]{2, 2}, 3)));
    }
}