package QuestionBank.Solution2301_2400;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution2389 {
    public int[] answerQueries(int[] nums, int[] queries) {
        Arrays.sort(nums);
        int[] ans = new int[queries.length];
        for (int i = 0; i < queries.length; i++) {
            int sum = 0;
            int count = 0;
            for (int j = 0; j < nums.length; j++) {
                if (sum > queries[i]) {
                    ans[i] = count - 1;
                    break;
                } else if (sum == queries[i]) {
                    ans[i] = count;
                    break;
                } else {
                    sum += nums[j];
                    count++;
                }
            }
        }
        return ans;
    }
    
    
    public static void main(String[] args) {
        Solution2389 solution2389 = new Solution2389();
        System.out.println(solution2389.answerQueries(new int[]{4, 5, 2, 1}, new int[]{3, 10, 21}));
    }
}