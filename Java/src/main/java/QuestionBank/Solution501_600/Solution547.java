package QuestionBank.Solution501_600;

/**
 * @author windows
 */
public class Solution547 {

    public int findCircleNum(int[][] isConnected) {
        int n = isConnected.length;
        int[] parent = new int[n];
        int provinces = 0;
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1){
                    union(parent, i, j);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (parent[i] != i){
                provinces++;
            }
        }
        return provinces;
    }


    private void union(int[] parent, int index1, int index2){
        parent[find(parent, index1)] = find(parent, index2);
    }

    private int find(int[] parent, int index) {
        if (parent[index] != index){
            parent[index] = find(parent, parent[index]);
        }
        return parent[index];
    }


    public static void main(String[] args) {
        Solution547 solution547 = new Solution547();
    }
}