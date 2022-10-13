package Solution2201_2300;

import java.util.HashMap;

/**
 * @author windows
 */
public class Solution2283 {
    public boolean digitCount(String num) {
        HashMap<Character, Integer> map = new HashMap<>();
        for (int i = 0; i < num.length(); i++) {
            map.put(num.charAt(i), map.getOrDefault(num.charAt(i), 0) + 1);
        }
        for (int i = 0; i < num.length(); i++) {
            if (!map.containsKey((char)(i + '0'))){
                map.put((char)(i + '0'), 0);
            }
            if (map.get((char)(i + '0')) != num.charAt(i) - '0') {
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution2283 solution2283 = new Solution2283();
        System.out.println(solution2283.digitCount("030"));
    }
}