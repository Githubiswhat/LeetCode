package QuestionBank.Solution201_300;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution217 {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            if (set.contains(nums[i])) {
                return true;
            }else{
                set.add(nums[i]);
            }
        }
        return false;
    }


    public static void main(String[] args) {
        Solution217 solution217 = new Solution217();
    }
}