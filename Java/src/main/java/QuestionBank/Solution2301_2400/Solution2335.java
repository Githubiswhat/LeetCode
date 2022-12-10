package QuestionBank.Solution2301_2400;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution2335 {
    public int fillCups(int[] amount) {
        int sum = 0;
        Arrays.sort(amount);
        sum += amount[0];
        return 0;
    }
    
    
    public static void main(String[] args) {
        Solution2335 solution2335 = new Solution2335();
        System.out.println(solution2335.fillCups(new int[]{1, 4, 2}));
    }
}