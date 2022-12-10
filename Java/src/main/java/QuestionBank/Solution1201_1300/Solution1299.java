package QuestionBank.Solution1201_1300;

import java.util.Stack;

/**
 * @author windows
 */
public class Solution1299 {
    public int[] replaceElements(int[] arr) {
        int[] res = new int[arr.length];
        int index = res.length - 1;
        Stack<Integer> stack = new Stack();
        for (int i = arr.length - 1; i >= 0; i--) {
            if (stack.isEmpty()){
                stack.push(arr[i]);
                res[index--] = -1;
            }else{
                res[index--] = stack.peek();
                if (arr[i] > stack.peek()){
                    stack.pop();
                    stack.push(arr[i]);
                }
            }
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1299 solution1299 = new Solution1299();
    }
}