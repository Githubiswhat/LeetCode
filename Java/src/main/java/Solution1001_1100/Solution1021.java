package Solution1001_1100;

import java.util.Stack;

/**
 * @author windows
 */
public class Solution1021 {
    public String removeOuterParentheses(String s) {
        int left = 0;
        Stack stack = new Stack();
        String res = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '('){
                stack.push('(');
            }else{
                stack.pop();
            }
            if (stack.isEmpty()) {
                res += s.substring(left + 1, i);
                left = i + 1;
            }
        }
        return res;
    }


    
    public static void main(String[] args) {
        Solution1021 solution1021 = new Solution1021();
    }
}