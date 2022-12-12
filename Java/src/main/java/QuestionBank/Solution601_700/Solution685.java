package QuestionBank.Solution601_700;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution685 {
    public int[] findRedundantDirectedConnection(int[][] edges) {
        HashSet<Integer> set = new HashSet<>();
        int n = edges.length;
        set.add(1);
        for (int i = 0; i < n; i++) {
            int[] edge = edges[i];
            if (set.contains(edge[1])) {
                return edge;
            }else{
                set.add(edge[1]);
            }
        }
        return new int[0];
    }


    public static void main(String[] args) {
        Solution685 solution685 = new Solution685();
    }
}