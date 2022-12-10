package QuestionBank.Solution1301_1400;

import java.util.ArrayList;
import java.util.Arrays;

/**
 * @author windows
 */
public class Solution1389 {
    public int[] createTargetArray(int[] nums, int[] index) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            list.add(index[i], nums[i]);
        }
        return Arrays.stream(list.toArray(new Integer[list.size()])).mapToInt(Integer::intValue).toArray();
    }
    
    
    public static void main(String[] args) {
        Solution1389 solution1389 = new Solution1389();
    }
}