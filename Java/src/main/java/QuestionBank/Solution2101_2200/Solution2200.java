package QuestionBank.Solution2101_2200;

import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.stream.Collectors;

/**
 * @author windows
 */
public class Solution2200 {
    public List<Integer> findKDistantIndices(int[] nums, int key, int k) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == key){
                int left = i - k >= 0 ? i - k : 0;
                int right = i + k < nums.length ? i + k : nums.length - 1;
                for (int j = left; j <= right; j++) {
                    set.add(j);
                }
            }
        }
        List<Integer> list = set.stream().collect(Collectors.toList());
        Collections.sort(list);
        return list;
    }
    
    
    public static void main(String[] args) {
        Solution2200 solution2200 = new Solution2200();
        System.out.println(solution2200.findKDistantIndices(new int[]{3, 4, 9, 1, 3, 9, 5}, 9, 1));
    }
}