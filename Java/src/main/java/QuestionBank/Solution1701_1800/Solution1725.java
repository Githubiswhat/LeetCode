package QuestionBank.Solution1701_1800;
/**
 * @author windows
 */
public class Solution1725 {
    public int countGoodRectangles(int[][] rectangles) {
        int max = Integer.MIN_VALUE;
        int maxCount = 0;
        for (int i = 0; i < rectangles.length; i++) {
            int min = Math.min(rectangles[i][0], rectangles[i][1]);
            if (min > max){
                max = min;
                maxCount = 1;
            }else if (max == min){
                maxCount++;
            }
        }
        return maxCount;
    }
    
    
    public static void main(String[] args) {
        Solution1725 solution1725 = new Solution1725();
    }
}