package QuestionBank.Solution101_200;

import sun.awt.windows.WPrinterJob;

/**
 * @author windows
 */
public class Solution162 {
//    public int findPeakElement(int[] nums) {
//        for (int i = 1; i < nums.length - 1; i++) {
//            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]){
//                return i;
//            }
//        }
//        return -1;
//    }

    public int findPeakElement(int[] nums) {
        int left = -1, right = nums.length;
        while (left + 1 != right) {
            int mid = left + (right - left) / 2;
            if (compare(nums, mid, mid + 1) > 0 && compare(nums, mid, mid - 1) > 0){
                return mid;
            }else if (compare(nums, mid, mid + 1) > 0){
                right = mid;
            }else{
                left = mid;
            }
        }
        return -1;
    }

    private int compare(int[] nums, int index1, int index2){
        if (index2 < 0 || index2 >= nums.length){
            return 1;
        }else {
            if (nums[index1] > nums[index2]){
                return 1;
            }else{
                return -1;
            }
        }
    }



    public static void main(String[] args) {
        Solution162 solution162 = new Solution162();
        System.out.println(0x80000000 == Integer.MIN_VALUE);
        System.out.println(Integer.MIN_VALUE == 0xFFFFFFFF);
    }
}