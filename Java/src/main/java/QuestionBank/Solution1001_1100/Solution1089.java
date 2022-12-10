package QuestionBank.Solution1001_1100;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution1089 {

    public int[] duplicateZeros(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 0){
                for (int j = arr.length - 1; j > i; j--) {
                    arr[j] = arr[j - 1];
                }
            }
            i++;
        }
        return arr;
    }
    
    public static void main(String[] args) {
        Solution1089 solution1089 = new Solution1089();
        System.out.println(Arrays.toString(solution1089.duplicateZeros(new int[]{1, 0, 2, 3, 0, 4, 5, 0})));
    }
}