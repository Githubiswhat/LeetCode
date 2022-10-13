package Solution701_800;

import com.sun.java.swing.plaf.windows.resources.windows;

/**
 * @author windows
 */
public class Solution704 {
    public int search(int[] nums, int target) {
        int left = - 1;
        int right = nums.length;
        while (left != right - 1){
            int mid = left + (right - left) / 2;
            if (nums[mid] == target){
                return mid;
            }else if (nums[mid] < target){
                left = mid;
            }else {
                right = mid;
            }
        }
        return -1;
    }


    public static void main(String[] args) {
        Solution704 solution704 = new Solution704();
    }
}