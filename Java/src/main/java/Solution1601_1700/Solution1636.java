package Solution1601_1700;

import java.util.Arrays;
import java.util.Comparator;
import java.util.HashMap;

/**
 * @author windows
 */
public class Solution1636 {
    public int[] frequencySort(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        Integer[] arr = Arrays.stream(nums).boxed().toArray(Integer[]::new);
        Arrays.sort(arr, new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                if (map.get(o1) == (int)map.get(o2)){
                    return o2 - o1;
                }else{
                    return map.get(o1) - map.get(o2);
                }
            }
        });
        return Arrays.stream(arr).mapToInt(Integer::intValue).toArray();
    }
    
    
    public static void main(String[] args) {
        Solution1636 solution1636 = new Solution1636();
    }
}