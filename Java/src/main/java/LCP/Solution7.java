package LCP;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;


/**
 * @author windows
 */
public class Solution7 {
    public static void main(String[] args) {
        Solution7 solution7 = new Solution7();
        System.out.println(solution7.numWays(5, new int[][]{{0, 2}, {2, 1}, {3, 4}, {2, 3}, {1, 4}, {2, 0}, {0, 4}}, 3));
    }

    public static String handlerArrayFormat(String str) {
        return str.replace('[', '{').replace(']', '}');
    }

    public int numWays(int n, int[][] relation, int k) {
        HashMap<Integer, List<Integer>> map = new HashMap<>();
        for (int[] rel : relation) {
            List<Integer> list = map.getOrDefault(rel[0], new ArrayList<Integer>());
            list.add(rel[1]);
            map.put(rel[0], list);
        }
        return dfs(0, map, k, n);
    }

    private int dfs(int vertex, Map<Integer, List<Integer>> map, int k, int n) {
        int count = 0;
        if (k < 0) {
            return 0;
        }
        if (k == 0 && vertex == n - 1) {
            return 1;
        } else {
            if (map.containsKey(vertex)){
                List<Integer> list = map.get(vertex);
                for (int next : list) {
                    count += dfs(next, map, k - 1, n);
                }
            }
        }
        return count;
    }
}