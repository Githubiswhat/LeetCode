package QuestionBank.Solution201_300;

import java.util.HashMap;
import java.util.HashSet;

/**
 * @author windows
 */
public class Solution290 {
    public boolean wordPattern(String pattern, String s) {
        String[] strings = s.split(" ");
        if (pattern.length() != strings.length){
            return false;
        }
        HashMap<Character, String> map = new HashMap<>();
        HashSet<String> set = new HashSet<>();
        for (int i = 0; i < pattern.length(); i++) {
            if (map.containsKey(pattern.charAt(i))) {
                String str = map.get(pattern.charAt(i));
                if (!str.equals(strings[i])){
                    return false;
                }
            }else {
                if (set.contains(strings[i])){
                    return false;
                }
                map.put(pattern.charAt(i), strings[i]);
                set.add(strings[i]);
            }
        }
        return true;
    }



    public static void main(String[] args) {
        Solution290 solution290 = new Solution290();
    }
}