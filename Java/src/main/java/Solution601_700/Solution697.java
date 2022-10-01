package Solution601_700;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution697 {
    public int findShortestSubArray(int[] nums) {
        HashMap<Integer, int[]> map = new HashMap<>();
        int maxCount = 0;
        for (int i = 0; i < nums.length; i++) {
            int[] ints = map.getOrDefault(nums[i], new int[3]);
            if (map.containsKey(nums[i])) {
                ints[2] = i;
            } else {
                ints[1] = i;
                ints[2] = i;
            }
            ints[0]++;
            map.put(nums[i], ints);
            maxCount = Math.max(maxCount, ints[0]);
        }
        int minLength = nums.length;
        for (Map.Entry<Integer, int[]> entry : map.entrySet()) {
            int[] value = entry.getValue();
            if (value[0] == maxCount){
                minLength = Math.min(value[2] - value[1] + 1, minLength);
            }
        }
        return minLength;
    }


    public static void main(String[] args) {
        Solution697 solution697 = new Solution697();
        System.out.println(solution697.findShortestSubArray(new int[]{2,1}));
    }
}