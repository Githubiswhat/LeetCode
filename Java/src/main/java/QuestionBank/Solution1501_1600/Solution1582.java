package QuestionBank.Solution1501_1600;
/**
 * @author windows
 */
public class Solution1582 {
    public int numSpecial(int[][] mat) {
        int count = 0;
        for (int i = 0; i < mat.length; i++) {
            int countOne = 0 ;
            int oneIndex = -1;
            for (int j = 0; j < mat[0].length; j++) {
                if (mat[i][j] != 0){
                    countOne++;
                    if (countOne > 1){
                        oneIndex = -1;
                        break;
                    }
                    oneIndex = j;
                }
            }
            if (oneIndex != -1){
                countOne = 0;
                for (int j = 0; j < mat.length; j++) {
                    if (mat[j][oneIndex] != 0){
                        countOne++;
                    }
                }
                if (countOne == 1){
                    count++;
                }
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution1582 solution1582 = new Solution1582();
        System.out.println(solution1582.numSpecial(new int[][]{{1, 0, 0}, {0, 0, 1}, {1, 0, 0}}));
    }
}