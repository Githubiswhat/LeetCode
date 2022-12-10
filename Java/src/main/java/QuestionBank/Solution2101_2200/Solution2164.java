package QuestionBank.Solution2101_2200;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution2164 {
    public int[] sortEvenOdd(int[] nums) {
        int len = nums.length;
        int[] odd = new int[len / 2];
        int[] even = new int[len - len / 2];
        for (int i = 0; i < nums.length; i += 2) {
            even[i / 2] = nums[i];
            if (i + 1 < len){
                odd[i / 2] = nums[i + 1];
            }
        }
        odd = Arrays.stream(odd).boxed().sorted(((o1, o2) -> o2 - o1)).mapToInt(Integer::intValue).toArray();
        Arrays.sort(even);
        for (int i = 0; i < nums.length; i += 2) {
            nums[i] = even[i / 2];
            if (i + 1 < len) {
                nums[i + 1] = odd[i / 2];
            }
        }
        return nums;
    }
    
    
    public static void main(String[] args) {
        Solution2164 solution2164 = new Solution2164();
        System.out.println(solution2164.sortEvenOdd(new int[]{4, 1, 2, 3, 5}));
    }
}