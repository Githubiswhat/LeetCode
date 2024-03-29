package QuestionBank.Solution1001_1100;

/**
 * @author windows
 */
public class Solution1041 {
    public boolean isRobotBounded(String instructions) {
        int n = instructions.length();
        int[][] dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int[] positions = {0, 0};
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (instructions.charAt(i) == 'G'){
                positions[0] += dirs[index][0];
                positions[1] += dirs[index][1];
            }
            if (instructions.charAt(i) == 'L'){
                index = (index + 3) % 4;
            }else if (instructions.charAt(i) == 'R'){
                index = (index + 1) % 4;
            }
        }
        return positions[0] == 0 && positions[1] == 0 || index != 0;
    }
    
    
    public static void main(String[] args) {
        Solution1041 solution1041 = new Solution1041();
    }
}