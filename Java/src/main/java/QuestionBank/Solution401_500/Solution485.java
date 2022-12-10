package QuestionBank.Solution401_500;

/**
 * @author windows
 */
public class Solution485 {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0;
        int max = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1){
                if (i > 0 && nums[i - 1] == 1) {
                    count++;
                }else{
                    count = 1;
                }
            }else{
                count = 0;
            }
            max = Math.max(max, count);
        }
        return max;
    }


    public static void main(String[] args) {
        Solution485 solution485 = new Solution485();
    }
}