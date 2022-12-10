package QuestionBank.Solution1301_1400;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution1346 {
    public boolean checkIfExist(int[] arr) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < arr.length; i++) {
            if (set.contains(arr[i] * 2) || (arr[i] % 2 == 0 && set.contains(arr[i] / 2))) {
                return true;
            }else{
                set.add(arr[i]);
            }
        }
        return false;
    }
    
    
    public static void main(String[] args) {
        Solution1346 solution1346 = new Solution1346();
    }
}