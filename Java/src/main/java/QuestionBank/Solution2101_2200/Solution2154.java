package QuestionBank.Solution2101_2200;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution2154 {
    public int findFinalValue(int[] nums, int original) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            set.add(nums[i]);
        }
        while(set.contains(original)){
            original *= 2;
        }
        return original;
    }
    
    
    public static void main(String[] args) {
        Solution2154 solution2154 = new Solution2154();
    }
}