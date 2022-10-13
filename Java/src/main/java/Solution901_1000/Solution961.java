package Solution901_1000;

import java.util.HashMap;
import java.util.HashSet;

/**
 * @author windows
 */
public class Solution961 {
    public int repeatedNTimes(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            if (set.contains(nums[i])){
                return nums[i];
            }else{
                set.add(nums[i]);
            }
        }
        return -1;
    }


    public static void main(String[] args) {
        Solution961 solution961 = new Solution961();
    }
}