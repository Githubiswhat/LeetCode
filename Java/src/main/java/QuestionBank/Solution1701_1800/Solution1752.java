package QuestionBank.Solution1701_1800;
/**
 * @author windows
 */
public class Solution1752 {
    public boolean check(int[] nums) {
        int max = 0;
        int maxIndex = -1;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > max){
                max = nums[i];
                maxIndex = i;
            }
        }
        for (int i = 0; i < maxIndex; i++) {
            if (nums[i] > nums[i + 1]){
                return false;
            }
        }
        for (int i = maxIndex; i < nums.length - 1; i++) {
            while(i < nums.length&& nums[i] == max){
                i++;
            }
            if (i < nums.length - 1 && nums[i] > nums[i + 1]){
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution1752 solution1752 = new Solution1752();
        System.out.println(solution1752.check(new int[]{6, 7, 7, 5}));
    }
}