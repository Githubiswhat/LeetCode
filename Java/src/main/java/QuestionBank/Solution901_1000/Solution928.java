package QuestionBank.Solution901_1000;

import java.util.*;

/**
 * @author windows
 */
public class Solution928 {

    static int[] initial;

    public static int minMalwareSpread(int[][] graph, int[] initial1) {
        initial = initial1;
        int n = graph.length;
        List<Integer>[] g = new ArrayList[n];
        Arrays.setAll(g, gs -> new ArrayList<Integer>());
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && graph[i][j] == 1) {
                    g[i].add(j);
                    g[j].add(i);
                }
            }
        }

        int ans = 0;
        int[] dp = new int[n];
        int mn = Integer.MAX_VALUE;
        for (int i = 0; i < initial.length; i++) {
            boolean[] vis = new boolean[n];
            for (int x : initial) {
                vis[x] = true;
            }
            Queue<Integer> q = new LinkedList<>();
            int cur = initial[i];
            for (int x : initial) {
                if (x != cur) q.add(x);
            }
            dp[cur] = initial.length - 1;
            while (!q.isEmpty()) {
                int m = q.size();
                for (int j = 0; j < m; j++) {
                    int node = q.poll();
                    for (var num : g[node]) {
                        if (num != node || num != cur)
                            if (!vis[num]) {
                                vis[num] = true;
                                dp[cur]++;
                                q.add(num);
                            }
                    }
                }
            }

            if (dp[cur] < mn || (dp[cur] == mn && cur < ans)) {
                mn = dp[cur];
                ans = cur;
            }
        }
        return ans;
    }


    public static void main(String[] args) {
        Solution928 solution928 = new Solution928();
    }
}