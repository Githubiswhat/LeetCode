package QuestionBank.Solution2201_2300;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution2206 {
    public boolean divideArray(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() % 2 != 0) {
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution2206 solution2206 = new Solution2206();
    }
}