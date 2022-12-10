package QuestionBank.Solution1501_1600;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution1539 {
    public int findKthPositive(int[] arr, int k) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < arr.length; i++) {
            set.add(arr[i]);
        }
        for (int i = 1; i < Integer.MAX_VALUE; i++) {
            if (!set.contains(i)){
                k--;
                if (k == 0){
                    return i;
                }
            }
        }
        return -1;
    }
    
    
    public static void main(String[] args) {
        Solution1539 solution1539 = new Solution1539();
    }
}