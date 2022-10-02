package Solution301_400;

import java.util.HashMap;
import java.util.HashSet;

/**
 * @author windows
 */
public class Solution387 {
    public int firstUniqChar(String s) {
        int[] chars = new int[26];
        for (int i = 0; i < s.length(); i++) {
            chars[s.charAt(i) - 'a']++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (chars[s.charAt(i) - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }


    public static void main(String[] args) {
        Solution387 solution387 = new Solution387();
    }
}