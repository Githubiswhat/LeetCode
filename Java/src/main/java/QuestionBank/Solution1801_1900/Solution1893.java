package QuestionBank.Solution1801_1900;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution1893 {
    public boolean isCovered(int[][] ranges, int left, int right) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < ranges.length; i++) {
            for (int j = ranges[i][0]; j <= ranges[i][1]; j++) {
                if (j >= left && j <= right) {
                    set.add(j);
                }
            }
        }
        return set.size() == right - left + 1;
    }
    
    
    public static void main(String[] args) {
        Solution1893 solution1893 = new Solution1893();
    }
}