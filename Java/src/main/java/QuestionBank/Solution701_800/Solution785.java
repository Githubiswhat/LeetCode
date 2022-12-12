package QuestionBank.Solution701_800;

/**
 * @author windows
 */
public class Solution785 {

    private static final int UNCOLORED = 0;
    private static final int RED = 1;
    private static final int GREEN = 2;
    private int[] color;
    private boolean valid;
    public boolean isBipartite(int[][] graph) {
        int n = graph.length;
        color = new int[n];
        valid = true;
        for (int i = 0; i < n && valid; i++) {
            if (color[i] == UNCOLORED) {
                dfs(graph, RED, i);
            }
        }
        return valid;
    }

    private void dfs(int[][] graph, int c, int node){
        color[node] = c;
        int nextColor = c == RED ? GREEN : RED;
        for (int i : graph[node]) {
            if (color[i] == UNCOLORED) {
                dfs(graph, nextColor, i);
                if (!valid){
                    return;
                }
            }else{
                if (color[i] != nextColor) {
                    valid = false;
                    return;
                }
            }
        }
    }


    public static void main(String[] args) {
        Solution785 solution785 = new Solution785();
    }
}