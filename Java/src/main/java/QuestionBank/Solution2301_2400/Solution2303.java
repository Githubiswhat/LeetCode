package QuestionBank.Solution2301_2400;
/**
 * @author windows
 */
public class Solution2303 {
    public double calculateTax(int[][] brackets, int income) {
        double sum = 0;
        if (income == 0){
            return 0.0;
        }
        for (int i = 0; i < brackets.length; i++) {
            if (brackets[i][0] <= income){
                if (i == 0){
                    sum = sum + (brackets[i][0]) * (brackets[i][1]) / 100.0;
                }else {
                    sum = sum + (brackets[i][0] - brackets[i - 1][0]) * (brackets[i][1]) / 100.0;
                }
            }else{
                if (i == 0){
                    sum = sum + income * (brackets[i][1]) / 100.0;
                }else if (i >= 1 && income > brackets[i - 1][0]){
                    double num = (income - brackets[i - 1][0]) * (brackets[i][1]) / 100.0;
                    sum = sum + num;
                }
                break;
            }
        }
        return sum;
    }
    
    
    public static void main(String[] args) {
        Solution2303 solution2303 = new Solution2303();
        System.out.println(solution2303.calculateTax(new int[][]{{1,0},{4,25},{5,50}} , 2));
    }

}