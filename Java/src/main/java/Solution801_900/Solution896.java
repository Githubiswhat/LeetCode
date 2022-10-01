package Solution801_900;

/**
 * @author windows
 */
public class Solution896 {
    public boolean isMonotonic(int[] nums) {
        boolean up = true;
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                up = false;
                break;
            }
        }
        boolean down = true;
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                down = false;
                break;
            }
        }
        return down || up;
    }


    public static void main(String[] args) {
        Solution896 solution896 = new Solution896();
    }
}