package Solution801_900;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution884 {
    public String[] uncommonFromSentences(String s1, String s2) {
        String[] str = (s1 + ' ' +s2).split(" ");
        Map<String, Integer> map = new HashMap<>();
        for (int i = 0; i < str.length; i++) {
            map.put(str[i], map.getOrDefault(str[i], 0) + 1);
        }
        String[] res = map.entrySet().stream().filter(e -> e.getValue() == 1).map(Map.Entry::getKey).toArray(String[]::new);
        return res;
    }




    public static void main(String[] args) {
        Solution884 solution884 = new Solution884();
    }
}