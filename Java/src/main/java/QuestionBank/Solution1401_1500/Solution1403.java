package QuestionBank.Solution1401_1500;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * @author windows
 */
public class Solution1403 {
    public List<Integer> minSubsequence(int[] nums) {
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
        }
        Arrays.sort(nums);
        int sumRes = 0;
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = nums.length - 1; i >= 0; i--) {
            sumRes += nums[i];
            list.add(nums[i]);
            if (sumRes > (sum - sumRes)){
                return list;
            }
        }
        return list;
    }
    
    
    public static void main(String[] args) {
        Solution1403 solution1403 = new Solution1403();
    }
}