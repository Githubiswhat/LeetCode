package QuestionBank.Solution1901_2000;

import java.util.ArrayList;
import java.util.List;


/**
 * @author windows
 */
public class Solution1971 {
//    public boolean validPath(int n, int[][] edges, int source, int destination) {
//        List<Integer>[] adjacentArr = new List[n];
//        for (int i = 0; i < n; i++) {
//            adjacentArr[i] = new ArrayList<Integer>();
//        }
//        for (int[] edge : edges) {
//            adjacentArr[edge[0]].add(edge[1]);
//            adjacentArr[edge[1]].add(edge[0]);
//        }
//        boolean[] visited = new boolean[n];
//        visited[source] = true;
//        Queue<Integer> queue = new LinkedList<Integer>();
//        queue.offer(source);
//        while (!queue.isEmpty()) {
//            int vertex = queue.poll();
//            List<Integer> adjacent = adjacentArr[vertex];
//            for (int next : adjacent) {
//                visited[next] = true;
//                queue.offer(next);
//            }
//        }
//        return visited[destination];
//    }


    public boolean validPath(int n, int[][] edges, int source, int destination) {
        List<Integer>[] adjacentArr = new List[n];
        for (int i = 0; i < adjacentArr.length; i++) {
            adjacentArr[i] = new ArrayList<Integer>();
        }
        for (int[] edge : edges) {
            adjacentArr[edge[0]].add(edge[1]);
            adjacentArr[edge[1]].add(edge[0]);
        }
        boolean[] visited = new boolean[n];
        return dfs(visited, destination, adjacentArr, source);
    }

    private boolean dfs(boolean[] visited, int destination, List<Integer>[] adjacentArr, int vertex){
        visited[vertex] = true;
        if (!visited[destination]){
            List<Integer> adjacent = adjacentArr[vertex];
            for (int next : adjacent) {
                if (!visited[next]){
                    if (dfs(visited, destination, adjacentArr, next)){
                        return true;
                    }
                }
            }
        }
        return visited[destination];
    }






    
    
    public static void main(String[] args) {
        Solution1971 solution1971 = new Solution1971();
    }
}