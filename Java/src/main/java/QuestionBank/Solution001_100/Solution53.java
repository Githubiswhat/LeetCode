package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution53 {
    public int maxSubArray(int[] nums) {
        int sum = nums[0];
        int max = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (sum < 0){
                sum = nums[i];
            }else{
                sum += nums[i];
                max = Math.max(max, sum);
            }
        }
        return max;
    }


    public static void main(String[] args) {
        Solution53 solution53 = new Solution53();
    }
}