package QuestionBank.Solution1301_1400;

import java.util.ArrayList;
import java.util.Arrays;

/**
 * @author windows
 */
public class Solution1313 {
    public int[] decompressRLElist(int[] nums) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < nums.length; i += 2) {
            for (int j = 0; j < nums[i]; j++) {
                list.add(nums[i + 1]);
            }
        }
        return Arrays.stream(list.toArray(new Integer[list.size()])).mapToInt(Integer::intValue).toArray();
    }
    
    
    public static void main(String[] args) {
        Solution1313 solution1313 = new Solution1313();
    }
}