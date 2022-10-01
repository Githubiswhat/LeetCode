package Solution001_100;

/**
 * @author windows
 */
public class Solution41 {
    public int firstMissingPositive(int[] nums) {
        int min = nums[0];
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        for (int i = 0; i < nums.length; i++) {
            int sub = nums[i] - min;
            int temp = nums[i];
            nums[i] = nums[sub];
            nums[sub] = temp;
        }
        return 0;
    }

}
