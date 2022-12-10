package QuestionBank.Solution201_300;

import java.util.HashMap;
import java.util.HashSet;

/**
 * @author windows
 */
public class Solution205 {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character, Character> map = new HashMap<>();
        HashSet<Character> set = new HashSet<>();
        for (int i = 0; i < s.length(); i++) {
            if (map.containsKey(s.charAt(i))){
                Character character = map.get(s.charAt(i));
                if (character != t.charAt(i)){
                    return false;
                }
            }else{
                if (set.contains(t.charAt(i))){
                    return false;
                }else{
                    map.put(s.charAt(i), t.charAt(i));
                    set.add(t.charAt(i));
                }
            }
        }
        return true;
    }


    public static void main(String[] args) {
        Solution205 solution205 = new Solution205();
    }
}