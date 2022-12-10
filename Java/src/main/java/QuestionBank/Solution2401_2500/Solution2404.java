package QuestionBank.Solution2401_2500;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution2404 {
    public int mostFrequentEven(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] % 2 == 0) {
                map.put(nums[i], map.getOrDefault(nums[i], 0 ) + 1);
            }
        }
        if (map.size() < 1){
            return -1;
        }
        int max = 0;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            max = Math.max(max, entry.getValue());
        }
        int res = Integer.MAX_VALUE;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() == max ){
                res = Math.min(res, entry.getKey());
            }
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution2404 solution2404 = new Solution2404();
    }
}