package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution80 {
    public int removeDuplicates(int[] nums) {
        int count = 1;
        int left = 0;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == nums[i - 1]){
                count++;
                if (count <= 2){
                    left++;
                    nums[left] = nums[i];
                }
            }else {
                count = 1;
                left++;
                nums[left] = nums[i];
            }
        }
        return left + 1;
    }


    public static void main(String[] args) {
        Solution80 solution80 = new Solution80();
        System.out.println(solution80.removeDuplicates(new int[]{1, 1, 1, 2, 2, 3}));
    }
}