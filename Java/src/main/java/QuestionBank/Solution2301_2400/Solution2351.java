package QuestionBank.Solution2301_2400;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution2351 {
    public char repeatedCharacter(String s) {
        HashSet<Character> set = new HashSet<>();
        for (int i = 0; i < s.length(); i++) {
            if (set.contains(s.charAt(i))) {
                return s.charAt(i);
            }else{
                set.add(s.charAt(i));
            }
        }
        return '?';
    }
    
    
    public static void main(String[] args) {
        Solution2351 solution2351 = new Solution2351();
    }
}