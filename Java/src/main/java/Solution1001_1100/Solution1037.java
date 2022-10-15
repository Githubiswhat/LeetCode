package Solution1001_1100;    
/**
 * @author windows
 */
public class Solution1037 {
    public boolean isBoomerang(int[][] points) {
        if ((points[0][0] - points[1][0]) == 0 && (points[1][0] - points[2][0]) != 0){
            double k1 = (points[0][1] - points[1][1]) / (points[0][0] - points[1][0]);
            double k2 = (points[1][1] - points[2][1]) / (points[1][0] - points[2][0]);
            return k1 != k2;
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution1037 solution1037 = new Solution1037();
    }
}