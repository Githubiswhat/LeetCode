package Solution1301_1400;

import java.util.Arrays;
import java.util.HashMap;

/**
 * @author windows
 */
public class Solution1331 {
    public int[] arrayRankTransform(int[] arr) {
        int[] nums = new int[arr.length];
        for (int i = 0; i < nums.length; i++) {
            nums[i] = arr[i];
        }
        Arrays.sort(nums);
        HashMap<Integer, Integer> map = new HashMap<>();
        int index = 1;
        for (int i = 0; i < nums.length; i++) {
            if (!map.containsKey(nums[i])) {
                map.put(nums[i], index++);
            }
        }
        for (int i = 0; i < arr.length; i++) {
            arr[i] = map.get(arr[i]);
        }
        return arr;
    }
    
    
    public static void main(String[] args) {
        Solution1331 solution1331 = new Solution1331();
        System.out.println(Arrays.toString(solution1331.arrayRankTransform(new int[]{37, 12, 28, 9, 100, 56, 80, 5, 12})));
    }
}