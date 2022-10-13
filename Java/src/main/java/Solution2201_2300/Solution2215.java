package Solution2201_2300;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

/**
 * @author windows
 */
public class Solution2215 {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        HashSet<Integer> set1 = new HashSet<>();
        for (int i = 0; i < nums1.length; i++) {
            set1.add(nums1[i]);
        }
        HashSet<Integer> num1Set = new HashSet<>();
        HashSet<Integer> num2Set = new HashSet<>();
        HashSet<Integer> set2 = new HashSet<>();
        for (int i = 0; i < nums2.length; i++) {
            if (!set1.contains(nums2[i])) {
                num2Set.add(nums2[i]);
            }
            set2.add(nums2[i]);
        }
        for (int i = 0; i < nums1.length; i++) {
            if (!set2.contains(nums1[i])) {
                num1Set.add(nums1[i]);
            }
        }
        return Stream.of(new ArrayList<>(num1Set), new ArrayList<>(num2Set)).collect(Collectors.toList());
    }
    
    
    public static void main(String[] args) {
        Solution2215 solution2215 = new Solution2215();
    }
}