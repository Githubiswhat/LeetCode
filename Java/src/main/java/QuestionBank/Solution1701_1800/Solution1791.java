package QuestionBank.Solution1701_1800;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution1791 {
    public int findCenter(int[][] edges) {
        HashSet<Integer> set = new HashSet<>(2);
        set.add(edges[0][0]);
        set.add(edges[0][1]);
        if (set.contains(edges[1][0])) {
            return edges[1][0];
        }
        return edges[1][1];
    }
    
    
    public static void main(String[] args) {
        Solution1791 solution1791 = new Solution1791();
    }
}