package QuestionBank.Solution2101_2200;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @author windows
 */
public class Solution2176 {
    public int countPairs(int[] nums, int k) {
        HashMap<Integer, List<Integer>> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            List<Integer> list = map.getOrDefault(nums[i], new ArrayList<Integer>());
            list.add(i);
            map.put(nums[i], list);
        }
        int count = 0;
        for (Map.Entry<Integer, List<Integer>> entry: map.entrySet()) {
            List<Integer> list = entry.getValue();
            for (int i = 0; i < list.size(); i++) {
                for (int j = i + 1; j < list.size(); j++) {
                    if (list.get(i) * list.get(j) % k == 0) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution2176 solution2176 = new Solution2176();
        System.out.println(solution2176.countPairs(new int[]{3, 1, 2, 2, 2, 1, 3}, 2));
    }
}