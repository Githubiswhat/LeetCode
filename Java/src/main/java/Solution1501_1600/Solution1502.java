package Solution1501_1600;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution1502 {
    public boolean canMakeArithmeticProgression(int[] arr) {
        Arrays.sort(arr);
        int sub = arr[1] - arr[0];
        for (int i = 2; i < arr.length; i++) {
            if ((arr[i] - arr[i - 1]) != sub){
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution1502 solution1502 = new Solution1502();
    }
}