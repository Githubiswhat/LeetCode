package QuestionBank.Solution001_100;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution16 {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int res = nums[0] + nums[1] + nums[2];
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length - 2; i++) {
            int left = i + 1;
            int right = nums.length - 1;
            while (left < right) {
                if (min > Math.abs(target - nums[i] - nums[left] - nums[right])){
                    min = Math.abs(target - nums[i] - nums[left] - nums[right]);
                    res = nums[i] + nums[left] + nums[right];
                }
                if (nums[left] + nums[right] < target - nums[i]){
                    left++;
                }else if (nums[left] + nums[right] > target - nums[i]){
                    right--;
                }else{
                    return res;
                }
            }
        }
        return res;
    }


    public static void main(String[] args) {
        Solution16 solution16 = new Solution16();
        System.out.println(solution16.threeSumClosest(new int[]{1, 1, 1, 0}, -100));
    }
}