package QuestionBank.Solution1501_1600;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution1512 {
    public int numIdenticalPairs(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        for (Map.Entry<Integer, Integer> entry : map.entrySet()){
            if (entry.getValue() > 1){
                count += entry.getValue() * (entry.getValue() - 1) / 2;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution1512 solution1512 = new Solution1512();
    }
}