package OfferSwardI;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution3 {
    public int findRepeatNumber(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            if (set.contains(nums[i])) {
                return i;
            }else{
                set.add(nums[i]);
            }
        }
        return -1;
    }
    
    
    public static void main(String[] args) {
        Solution3 solution3 = new Solution3();
    }
}