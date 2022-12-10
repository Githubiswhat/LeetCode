package QuestionBank.Solution1701_1800;

/**
 * @author windows
 */
public class Solution1779 {
    public int nearestValidPoint(int x, int y, int[][] points) {
        int min = Integer.MAX_VALUE;
        int index = -1;
        for (int i = 0; i < points.length; i++) {
            if (points[i][0] == x || points[i][1] == y){
                int dis = Math.abs(points[i][0] - x) + Math.abs(points[i][1] - y);
                if (dis < min) {
                    min = dis;
                    index = i;
                }
            }
        }
        return index;
    }
    
    
    public static void main(String[] args) {
        Solution1779 solution1779 = new Solution1779();
    }
}