package QuestionBank.Solution401_500;

import java.util.HashMap;

/**
 * @author windows
 */
public class Solution496 {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums2.length; i++) {
            map.put(nums2[i], i);
        }
        for (int i = 0; i < nums1.length; i++) {
            Integer index = map.get(nums1[i]);
            boolean flag = false;
            for (int j = index + 1; j < nums2.length; j++) {
                if (nums2[j] > nums1[i]) {
                    nums1[i] = nums2[j];
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                nums1[i] = -1;
            }
        }
        return nums1;
    }


    public static void main(String[] args) {
        Solution496 solution496 = new Solution496();
    }
}