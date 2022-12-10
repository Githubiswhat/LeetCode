package QuestionBank.Solution2101_2200;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution2148 {
    public int countElements(int[] nums) {
        Arrays.sort(nums);
        int left = 0;
        int right = nums.length - 1;
        while(left < nums.length && nums[left] == nums[0]){
            left++;
        }
        while(right >= 0 && nums[right] == nums[nums.length - 1]){
            right--;
        }
        return right - left >= 0 ? right - left + 1 : 0;
    }
    
    
    public static void main(String[] args) {
        Solution2148 solution2148 = new Solution2148();
    }
}