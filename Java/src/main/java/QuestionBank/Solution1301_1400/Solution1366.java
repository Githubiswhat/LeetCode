package QuestionBank.Solution1301_1400;

import java.util.Arrays;
import java.util.HashMap;

/**
 * @author windows
 */
public class Solution1366 {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] arr = new int[nums.length];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = nums[i];
        }
        Arrays.sort(arr);
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < arr.length; i++) {
            if (!map.containsKey(arr[i])){
                map.put(arr[i], i);
            }
        }
        for (int i = 0; i < nums.length; i++) {
            arr[i] = map.get(nums[i]);
        }
        return arr;
    }
    
    
    public static void main(String[] args) {
        Solution1366 solution1366 = new Solution1366();
    }
}