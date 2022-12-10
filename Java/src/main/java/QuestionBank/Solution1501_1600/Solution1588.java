package QuestionBank.Solution1501_1600;
/**
 * @author windows
 */
public class Solution1588 {
    public int sumOddLengthSubarrays(int[] arr) {
        int sum = 0;
        for (int j = 1; j <= arr.length; j += 2) {
            for (int i = 0; i <= arr.length - j; i++) {
                for (int k = i; k < i + j; k++) {
                    sum += arr[k];
                }
            }
        }
        return sum;
    }


    public static void main(String[] args) {
        Solution1588 solution1588 = new Solution1588();
        System.out.println(solution1588.sumOddLengthSubarrays(new int[]{1, 4, 2, 5, 3}));
    }
}