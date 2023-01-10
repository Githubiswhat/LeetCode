package QuestionBank.Solution1801_1900;
/**
 * @author windows
 */
public class Solution1806 {


    // 0  0  1
    // 2  1  2
    // 3  4  5

    // 0  1  2  3  4  5
    // 0  3  1  4  2  5
    // 0  4  3  2  1  5
    // 0  2  4  1  3  5
    // 0  1  2  3  4  5
    public int reinitializePermutation(int n) {
        int i = 1;
        int step = 1;
        while (true){
            i = i % 2 == 0 ? i / 2 : n / 2 + (i - 1) / 2;
            if (i == 1){
                return step;
            }
            step++;
        }
    }
    
    
    public static void main(String[] args) {
        Solution1806 solution1806 = new Solution1806();
    }
}