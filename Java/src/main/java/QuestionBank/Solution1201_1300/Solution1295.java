package QuestionBank.Solution1201_1300;
/**
 * @author windows
 */
public class Solution1295 {
    public int findNumbers(int[] nums) {
        int res = 0;
        for (int i = 0; i < nums.length; i++) {
            int count = 0;
            int temp = nums[i];
            while (temp > 0){
                count++;
                temp /= 10;
            }
            if (count % 2 == 0){
                res++;
            }
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1295 solution1295 = new Solution1295();
    }
}