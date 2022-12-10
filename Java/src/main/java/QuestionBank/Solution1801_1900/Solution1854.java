package QuestionBank.Solution1801_1900;
/**
 * @author windows
 */
public class Solution1854 {
    public int maximumPopulation(int[][] logs) {
        int sum = 0;
        int year = 1950;
        int max = Integer.MIN_VALUE;
        int[] years = new int[101];
        for (int i = 0; i < logs.length; i++) {
            years[logs[i][0] - 1950]++;
            years[logs[i][1] - 1950]--;
        }
        for (int i = 0; i < years.length; i++) {
            sum += years[i];
            if (sum > max){
                max = sum;
                year = i + 1950;
            }
        }
        return year;
    }
    
    
    public static void main(String[] args) {
        Solution1854 solution1854 = new Solution1854();
    }
}