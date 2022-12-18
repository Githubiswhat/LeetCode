package QuestionBank.Solution1701_1800;

import java.util.Arrays;
import java.util.stream.IntStream;

/**
 * @author windows
 */
public class Solution1785 {
    public int minElements(int[] nums, int limit, int goal) {
        long sum = 0L;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
        }
        if (sum == goal) {
            return 0;
        }
        long sub = Math.abs(goal - sum);
        long times = sub / limit;
        return (int) (times + (sub % limit == 0 ? 0 : 1));
    }


    public static void main(String[] args) {
        Solution1785 solution1785 = new Solution1785();
    }
}