package Solution1401_1500;

import java.util.HashMap;
import java.util.HashSet;
import java.util.stream.Collectors;

/**
 * @author windows
 */
public class Solution1496 {
    public boolean isPathCrossing(String path) {
        int[] pos = {0, 0};
        HashMap<Character, int[]> map = new HashMap<Character, int[]>(){{
            put('N', new int[]{0, 1});
            put('S', new int[]{0, -1});
            put('E', new int[]{1, 0});
            put('W', new int[]{-1, 0});
        }};
        HashSet<String> set = new HashSet<>();
        set.add("0 0");
        for (int i = 0; i < path.length(); i++) {
            int[] ints = map.get(path.charAt(i));
            pos[0] += ints[0];
            pos[1] += ints[1];
            String str = String.valueOf(pos[0]) + " " + String.valueOf(pos[1]);
            if (set.contains(str)) {
                return true;
            }
            set.add(str);
        }
        return false;
    }
    
    
    public static void main(String[] args) {
        Solution1496 solution1496 = new Solution1496();
    }
}