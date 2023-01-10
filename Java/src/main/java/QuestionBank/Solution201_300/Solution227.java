package QuestionBank.Solution201_300;

import java.util.Deque;
import java.util.LinkedList;

/**
 * @author windows
 */
public class Solution227 {
    public int calculate(String s) {
        int ans = 0;
        Deque<Integer> stack = new LinkedList<>();
        int num = 0;
        char preOperator = '+';
        for (int i = 0; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i))) {
                num = num * 10 + s.charAt(i) - '0';
            }
            if (!Character.isDigit(s.charAt(i)) && s.charAt(i) != ' ' || i == s.length() - 1) {
                switch (preOperator) {
                    case '+':
                        break;
                    case '-':
                        num = -num;
                        break;
                    case '*':
                        num = stack.pop() * num;
                        break;
                    case '/':
                        num = stack.pop() / num;
                        break;
                }
                preOperator = s.charAt(i);
                stack.push(num);
                num = 0;
            }
        }
        while (!stack.isEmpty()){
            ans += stack.pop();
        }
        return ans;
    }


    public static void main(String[] args) {
        Solution227 solution227 = new Solution227();
    }
}