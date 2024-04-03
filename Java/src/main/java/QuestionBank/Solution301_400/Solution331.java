package QuestionBank.Solution301_400;

import java.util.Stack;

/**
 * @author windows
 */
public class Solution331 {

    public boolean isValidSerialization(String preorder) {
        String[] strs = preorder.split(",");
        Stack<String> stack = new Stack<>();
        for (String str : strs) {
            stack.push(str);
            while (stack.size() >= 3 && stack.get(stack.size() - 1).equals("#")
                    && stack.get(stack.size() - 2).equals("#") && !stack.get(stack.size()- 3).equals("#")){
                stack.pop();
                stack.pop();
                stack.pop();
                stack.push("#");
            }
        }
        return stack.size() == 1 && stack.peek().equals("#");
    }


    public static void main(String[] args) {
        Solution331 solution331 = new Solution331();
    }
}