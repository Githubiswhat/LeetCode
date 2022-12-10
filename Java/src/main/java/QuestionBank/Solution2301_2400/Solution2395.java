package QuestionBank.Solution2301_2400;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution2395 {
    public boolean findSubarrays(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length - 1; i++) {
            int sum = nums[i] + nums[i + 1];
            if (set.contains(sum)) {
                return true;
            }
            set.add(sum);
        }
        return false;
    }
    
    
    public static void main(String[] args) {
        Solution2395 solution2395 = new Solution2395();
    }
}