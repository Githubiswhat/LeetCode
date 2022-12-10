package QuestionBank.Solution2301_2400;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution2341 {
    public int[] numberOfPairs(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        int sum = 0;
        int num = 0;
        for (Map.Entry<Integer, Integer> entry: map.entrySet()) {
            sum += entry.getValue() / 2;
            num += entry.getValue() % 2;
        }
        return new int[]{sum, num};
    }
    
    
    public static void main(String[] args) {
        Solution2341 solution2341 = new Solution2341();
        System.out.println(Arrays.toString(solution2341.numberOfPairs(new int[]{1, 3, 2, 1, 3, 2, 2})));
    }
}