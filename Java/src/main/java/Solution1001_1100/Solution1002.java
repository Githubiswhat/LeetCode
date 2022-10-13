package Solution1001_1100;

import java.util.*;
import java.util.stream.Stream;

/**
 * @author windows
 */
public class Solution1002 {
    public List<String> commonChars(String[] words) {
        String str = words[0];
        for (int i = 1; i < words.length; i++) {
            HashMap<Character, Integer> map = new HashMap<>();
            for (int j = 0; j < str.length(); j++) {
                map.put(str.charAt(j), map.getOrDefault(str.charAt(j), 0) + 1);
            }
            StringBuilder sb = new StringBuilder();
            for (int j = 0; j < words[i].length(); j++) {
                char ch = words[i].charAt(j);
                if (map.containsKey(ch) && map.get(ch) > 0){
                    sb.append(ch);
                    map.put(ch, map.get(ch) - 1);
                }
            }
            str = sb.toString();
        }
        ArrayList<String> res = new ArrayList<>();
        for (int i = 0; i < str.length(); i++) {
            res.add(String.valueOf(str.charAt(i)));
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1002 solution1002 = new Solution1002();
    }
}