package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution1 {
    public int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            int temp = target - nums[i];
            for (int j = i + 1; j < nums.length; j++) {
                if (temp == nums[j]) {
                    return new int[]{i, j};
                }
            }
        }
        return new int[]{0, 0};
    }

    public static void main(String[] args) {
        System.out.println(new Solution1().twoSum(new int[]{1, 1}, 1));
    }
}

