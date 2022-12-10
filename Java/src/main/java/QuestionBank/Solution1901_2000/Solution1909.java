package QuestionBank.Solution1901_2000;
/**
 * @author windows
 */
public class Solution1909 {
    public boolean canBeIncreasing(int[] nums) {
        if (nums.length < 3){
            return true;
        }
        int index = -1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] <= nums[i - 1]){
                if (index != -1){
                    return false;
                }else {
                    index = i - 1;
                }
            }
        }
        if (index == -1){
            return true;
        }
        return nums[index + 1] > nums[index - 1];
    }
    
    
    public static void main(String[] args) {
        Solution1909 solution1909 = new Solution1909();
        System.out.println(solution1909.canBeIncreasing(new int[]{100, 21, 100}));
    }
}