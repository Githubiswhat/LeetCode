package QuestionBank.Solution2101_2200;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution2199 {
    public int mostFrequent(int[] nums, int key) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == key){
                if (i + 1 < nums.length){
                    map.put(nums[i + 1], map.getOrDefault(nums[i + 1], 0) + 1);
                }
            }
        }
        int max = 0;
        int target = -1;
        for (Map.Entry<Integer, Integer> entry: map.entrySet()) {
            if (entry.getValue() > max){
                max = entry.getValue();
                target = entry.getKey();
            }
        }
        return target;
    }
    
    
    public static void main(String[] args) {
        Solution2199 solution2199 = new Solution2199();
    }
}