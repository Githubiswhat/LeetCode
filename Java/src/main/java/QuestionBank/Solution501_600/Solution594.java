package QuestionBank.Solution501_600;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution594 {
    public int findLHS(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        int max = 0;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (map.containsKey(entry.getKey() - 1)) {
                max = Math.max(max, map.get(entry.getKey() - 1) + entry.getValue());
            }else if (map.containsKey(entry.getKey() + 1)){
                max = Math.max(max, map.get(entry.getKey() + 1) + entry.getValue());
            }
        }
        return max;
    }


    public static void main(String[] args) {
        Solution594 solution594 = new Solution594();
    }
}