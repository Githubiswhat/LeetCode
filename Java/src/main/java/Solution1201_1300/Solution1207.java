package Solution1201_1300;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;

/**
 * @author windows
 */
public class Solution1207 {
    public boolean uniqueOccurrences(int[] arr) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < arr.length; i++) {
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }
        HashSet<Integer> set = new HashSet<>();
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (set.contains(entry.getValue())) {
                return false;
            }else{
                set.add(entry.getValue());
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution1207 solution1207 = new Solution1207();
    }
}