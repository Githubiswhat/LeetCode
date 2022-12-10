package QuestionBank.Solution401_500;

/**
 * @author windows
 */
public class Solution441 {
    public int arrangeCoins(int n) {
        long left = 0;
        long right = n + 1;
        while (left != right - 1) {
            long middle = left + (right - left) / 2;
            long sum = (((1 + middle) * middle) / 2);
            if (sum > n){
                right = middle;
            }else if (sum < n){
                left = middle;
            }else{
                return (int) middle;
            }
        }
        return (int) left;
    }


    public static void main(String[] args) {
        Solution441 solution441 = new Solution441();
        System.out.println(solution441.arrangeCoins(2147483647));
    }
}