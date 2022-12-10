package QuestionBank.Solution1601_1700;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution1619 {
    public double trimMean(int[] arr) {
        int len = arr.length;
        double sum = 0;
        Arrays.sort(arr);
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        for (int i = 0; i < len / 20; i++) {
            sum -= arr[i];
            sum -= arr[len - i - 1];
        }
        return sum / (len - (len / 20) * 2);
    }
    
    
    public static void main(String[] args) {
        Solution1619 solution1619 = new Solution1619();
    }
}