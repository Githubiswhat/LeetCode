package Solution1901_2000;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution1941 {
    public boolean areOccurrencesEqual(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            map.put(s.charAt(i), map.getOrDefault(s.charAt(i), 0) + 1);
        }
        int num = map.get(s.charAt(0));
        for (Map.Entry<Character, Integer> entry : map.entrySet()) {
            if (entry.getValue() != num){
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution1941 solution1941 = new Solution1941();
    }
}