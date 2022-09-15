package Solution001_100;

import java.util.HashMap;
import java.util.Stack;

/**
 * @author windows
 */
public class Solution20 {

    public boolean isValid(String s) {
        Stack<Character> stack = new Stack();
        HashMap<Character, Character> map = new HashMap<>();
        map.put('}', '{');
        map.put(']', '[');
        map.put(')', '(');
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '{' || s.charAt(i) == '[' || s.charAt(i) == '('){
                stack.push(s.charAt(i));
            }else {
                if (stack.isEmpty()) {
                    return false;
                }else {
                    Character character = map.get(s.charAt(i));
                    if (!character.equals(stack.pop())) {
                        return false;
                    }
                }
            }
        }
        if (stack.isEmpty()){
            return true;
        }else{
            return false;
        }
    }

    public static void main(String[] args) {
        Solution20 solution20 = new Solution20();
        boolean valid = solution20.isValid("[[[[");
        System.out.println(valid);
    }
}
