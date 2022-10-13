package Solution2001_2100;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution2006 {
    public int countKDifference(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        int count = 0;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (map.containsKey(entry.getKey() - k)){
                count += entry.getValue() * map.get(entry.getKey() - k);
            }
            if (map.containsKey(entry.getKey() + k)){
                count += entry.getValue() * map.get(entry.getKey() + k);
            }
        }
        return count / 2;
    }
    
    
    public static void main(String[] args) {
        Solution2006 solution2006 = new Solution2006();
    }
}