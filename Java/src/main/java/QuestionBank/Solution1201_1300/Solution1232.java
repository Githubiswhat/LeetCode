package QuestionBank.Solution1201_1300;
/**
 * @author windows
 */
public class Solution1232 {
    public boolean checkStraightLine(int[][] coordinates) {
        if (coordinates[0][0] - coordinates[1][0] == 0){
            for (int i = 0; i < coordinates.length - 1; i++) {
                if (coordinates[i][0] != coordinates[i + 1][0]){
                    return false;
                }
            }
            return true;
        }
        double k = (coordinates[0][1] - coordinates[1][1]) / (coordinates[0][0] - coordinates[1][0]);
        for (int i = 1; i < coordinates.length - 1; i++) {
            if ((coordinates[i][0] - coordinates[i + 1][0]) == 0){
                return false;
            }
            double k1 = (coordinates[i][1] - coordinates[i + 1][1]) / (coordinates[i][0] - coordinates[i + 1][0]);
            if (k1 != k){
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution1232 solution1232 = new Solution1232();
    }
}