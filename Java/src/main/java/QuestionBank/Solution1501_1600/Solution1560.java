package QuestionBank.Solution1501_1600;

import java.util.List;

/**
 * @author windows
 */
public class Solution1560 {
    public List<Integer> mostVisited(int n, int[] rounds) {
        int[] arr = new int[n + 1];
        for (int i = 0; i < rounds.length - 1; i++) {
            int a = rounds[i];
            int b = rounds[i + 1];
            if (a > b){
                for (int j = a; j < b; j++) {
                    arr[j]++;
                }
            }
            //[1,3,1,2]

        }
        return null;
    }
    
    
    public static void main(String[] args) {
        Solution1560 solution1560 = new Solution1560();
    }
}