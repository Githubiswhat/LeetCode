package QuestionBank.Solution201_300;

/**
 * @author windows
 */
public class Solution209 {
    public int minSubArrayLen(int target, int[] nums) {
        int n = nums.length;
        int sum = 0;
        int minLen = Integer.MAX_VALUE;
        int len = 0;
        int left = 0, right = 0;
        while (right < n){
            sum += nums[right];
            len++;
            while(sum >= target) {
                minLen = Math.min(minLen, len);
                sum -= nums[left];
                left++;
                len--;
            }
            right++;
        }
        return minLen == Integer.MAX_VALUE ? 0 : minLen;
    }


    public static void main(String[] args) {
        Solution209 solution209 = new Solution209();
    }
}