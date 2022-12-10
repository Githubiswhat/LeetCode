package QuestionBank.Solution2301_2400;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution2367 {
    public int arithmeticTriplets(int[] nums, int diff) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            set.add(nums[i]);
        }
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (set.contains(nums[i] + diff) && set.contains(nums[i] + diff * 2)) {
                count++;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution2367 solution2367 = new Solution2367();
    }
}