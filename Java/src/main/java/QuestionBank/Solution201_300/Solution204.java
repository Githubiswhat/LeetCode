package QuestionBank.Solution201_300;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution204 {

    public int countPrimes(int n) {
        int count = 0;
        int[] isPrime = new int[n];
        Arrays.fill(isPrime, 1);
        for (int i = 2; i < n; i++) {
            if (isPrime[i] == 1) {
                count++;
                if (i * i < n){
                    for (int j = i; j < n; j += i) {
                        isPrime[j] = 0;
                    }
                }
            }
        }
        return count;
    }


    public static void main(String[] args) {
        Solution204 solution204 = new Solution204();
    }
}