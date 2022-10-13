package Solution1601_1700;

import java.util.HashMap;

/**
 * @author windows
 */
public class Solution1624 {
    public int maxLengthBetweenEqualCharacters(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        int max = -1;
        for (int i = 0; i < s.length(); i++) {
            if (map.containsKey(s.charAt(i))){
                max = Math.max(max, i - map.get(s.charAt(i)) - 1);
            }else{
                map.put(s.charAt(i), i);
            }
        }
        return max;
    }
    
    
    public static void main(String[] args) {
        Solution1624 solution1624 = new Solution1624();
    }
}