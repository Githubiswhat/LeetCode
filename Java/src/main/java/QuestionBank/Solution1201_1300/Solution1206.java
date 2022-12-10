package QuestionBank.Solution1201_1300;
/**
 * @author windows
 */
public class Solution1206 {
    public int minTimeToVisitAllPoints(int[][] points) {
        int sum = 0;
        for (int i = 0; i < points.length - 1; i++) {
            int x = Math.abs(points[i][0] - points[i + 1][0]);
            int y = Math.abs(points[i][1] - points[i + 1][1]);
            sum += Math.min(x, y);
            sum += Math.abs(x - y);
        }
        return sum;
    }

    
    public static void main(String[] args) {
        Solution1206 solution1206 = new Solution1206();
    }
}