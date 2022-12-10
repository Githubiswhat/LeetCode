package QuestionBank.Solution2001_2100;

import java.util.Arrays;
import java.util.HashSet;

/**
 * @author windows
 */
public class Solution2094 {
    public int[] findEvenNumbers(int[] digits) {
        boolean[] used = new boolean[digits.length];
        HashSet<Integer> set = new HashSet<>();
        Arrays.sort(digits);
        for (int i = 0; i < digits.length; i++) {
            if (digits[i] == 0){
                continue;
            }
            int sum = digits[i];
            used[i] = true;
            for (int j = 0; j < digits.length; j++) {
                if (used[j]){
                    continue;
                }
                used[j] = true;
                int sumJ = sum * 10 + digits[j];
                for (int k = 0; k < digits.length; k++) {
                    if (used[k]){
                        continue;
                    }
                    int temp = sumJ * 10 + digits[k];
                    if (temp % 2 == 0){
                        set.add(temp);
                    }
                }
                used[j] = false;
            }
            used[i] = false;
        }
        int[] res = set.stream().mapToInt(Integer::intValue).toArray();
        Arrays.sort(res);
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution2094 solution2094 = new Solution2094();
        int[] res = solution2094.findEvenNumbers(new int[]{2, 1, 3, 0});
        System.out.println(Arrays.toString(res));
    }
}