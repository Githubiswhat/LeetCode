package QuestionBank.Solution2001_2100;

import java.util.HashSet;
import java.util.List;
import java.util.stream.Collectors;

/**
 * @author windows
 */
public class Solution2032 {
    public List<Integer> twoOutOfThree(int[] nums1, int[] nums2, int[] nums3) {
        HashSet<Integer> set = new HashSet<>();
        HashSet<Integer> resSet = new HashSet<>();
        HashSet<Integer> num2set = new HashSet<>();
        for (int i = 0; i < nums1.length; i++) {
            set.add(nums1[i]);
        }
        for (int i = 0; i < nums2.length; i++) {
            if (set.contains(nums2[i]) && !num2set.contains(nums2[i])) {
                resSet.add(nums2[i]);
            }
            set.add(nums2[i]);
            num2set.add(nums2[i]);
        }
        for (int i = 0; i < nums3.length; i++) {
            if (set.contains(nums3[i])) {
                resSet.add(nums3[i]);
            }
        }
        return resSet.stream().collect(Collectors.toList());
    }
    
    
    public static void main(String[] args) {
        Solution2032 solution2032 = new Solution2032();
    }
}