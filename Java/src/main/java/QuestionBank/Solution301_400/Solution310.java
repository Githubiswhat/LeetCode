package QuestionBank.Solution301_400;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

/**
 * @author windows
 */
public class Solution310 {

    public List<Integer> findMinHeightTrees(int n, int[][] edges) {
        List<Integer> res = new ArrayList<>();
        if (n == 1) {
            res.add(0);
            return res;
        }
        int[] degree = new int[n];
        List<Integer>[] adjacentArr = new List[n];
        for (int i = 0; i < n; i++) {
            adjacentArr[i] = new ArrayList<>();
        }
        for (int i = 0; i < edges.length; i++) {
            int[] edge = edges[i];
            degree[edge[0]]++;
            degree[edge[1]]++;
            adjacentArr[edge[0]].add(edge[1]);
            adjacentArr[edge[1]].add(edge[0]);
        }
        ArrayList<Integer> list = new ArrayList<>();
        Queue<Integer> queue = new LinkedList<>();
        for (int i = 0; i < n; i++) {
            if (degree[i] == 1){
                list.add(degree[i]);
                queue.offer(i);
            }
        }
        while(!queue.isEmpty()){
            res = new ArrayList<>();
            int size = queue.size();
            for (int i = 0; i < size; i++) {
                int node = queue.poll();
                res.add(node);
                List<Integer> adjacent = adjacentArr[node];
                for (int j = 0; j < adjacent.size(); j++) {
                    int neighbor = adjacent.get(j);
                    degree[neighbor]--;
                    if (degree[neighbor] == 1){
                        queue.offer(neighbor);
                    }
                }
            }
        }
        return res;
    }

    public static void main(String[] args) {
        Solution310 solution310 = new Solution310();
    }
}