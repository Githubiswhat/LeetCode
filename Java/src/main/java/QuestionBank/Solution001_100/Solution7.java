package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution7 {
    public int reverse(int x) {
        int reverse = 0;
        boolean flag = x > 0;
        x = Math.abs(x);
        while (x != 0) {
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }
        if (!flag){
            reverse = -reverse;
        }
        if (flag && reverse < 0){
            return 0;
        }
        if (!flag && reverse > 0){
            return 0;
        }
        return reverse;
    }


    public static void main(String[] args) {
        Solution7 solution7 = new Solution7();
    }
}