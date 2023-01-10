package QuestionBank.Solution101_200;

/**
 * @author windows
 */
public class Solution137 {
    public int singleNumber(int[] nums) {
        int answer = 0;
        for (int i = 0; i < 32; i++) {
            int total = 0;
            for (int j = 0; j < nums.length; j++) {
                total += ((nums[j] >> i) & 1);
            }
            if (total % 3 != 0){
                answer |= (1 << i);
            }
        }
        return answer;
    }

    public static void main(String[] args) {
        Solution137 solution137 = new Solution137();
    }
}