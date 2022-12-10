package QuestionBank.Solution1001_1100;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution1051 {
    public int heightChecker(int[] heights) {
        int[] res = new int[heights.length];
        for (int i = 0; i < heights.length; i++) {
            res[i] = heights[i];
        }
        Arrays.sort(res);
        int count = 0;
        for (int i = 0; i < res.length; i++) {
            if (res[i] != heights[i]){
                count++;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution1051 solution1051 = new Solution1051();
    }
}