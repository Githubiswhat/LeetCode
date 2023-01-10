package QuestionBank.Solution1801_1900;
/**
 * @author windows
 */
public class Solution1802 {
    public int maxValue(int n, int index, int maxSum) {
        int left = -1, right = n + 1;
        while (left + 1 != right){
            int mid = left + (left + right) / 2;
            int sum1 = mid * mid, sumLeft = (1 + mid - 1) * mid / 2, sumRight = (1 + n - mid - 1) * (n - mid - 1) / 2;
            int sum = sum1 + sumLeft + sumRight;
            if (sum <= maxSum){
                left = mid;
            }else{
                right = mid;
            }
        }
        return left;
    }
    
    
    public static void main(String[] args) {
        Solution1802 solution1802 = new Solution1802();
    }
}