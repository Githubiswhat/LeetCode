package QuestionBank.Solution501_600;

/**
 * @author windows
 */
public class Solution551 {
    public boolean checkRecord(String s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'A'){
                count++;
            }
        }
        return count < 2 && s.indexOf("LLL") == -1;
    }


    public static void main(String[] args) {
        Solution551 solution551 = new Solution551();
    }
}