package Solution1401_1500;    
/**
 * @author windows
 */
public class Solution1480 {
    public int[] runningSum(int[] nums) {
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
    
    
    public static void main(String[] args) {
        Solution1480 solution1480 = new Solution1480();
    }
}