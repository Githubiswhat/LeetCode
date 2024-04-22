package QuestionBank.Solution2001_2100;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * @author windows
 */
public class Solution2009 {

    public int minOperations(int[] nums) {
        int n = nums.length;

        int ans = 0, left = 0;
        Arrays.sort(nums);

        int m = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[m++] = nums[i]; // 原地去重
            }
        }

        for (int i = 0; i < m; i++) {
            while (nums[left] < nums[i] - n + 1){
                left++;
            }
            ans = Math.max(ans, i - left + 1);
        }
        return n - ans;
    }
    
    
    public static void main(String[] args) {
        Solution2009 solution2009 = new Solution2009();
    }
}