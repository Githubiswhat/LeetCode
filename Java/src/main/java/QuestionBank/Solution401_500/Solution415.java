package QuestionBank.Solution401_500;

/**
 * @author windows
 */
public class Solution415 {
    public String addStrings(String num1, String num2) {
        int len1 = num1.length() - 1;
        int len2 = num2.length() - 1;
        int carry = 0;
        StringBuilder sb = new StringBuilder();
        while(len1 >= 0 || len2 >= 0){
            int a = len1 >= 0 ? num1.charAt(len1) - '0' : 0;
            int b = len2 >= 0 ? num2.charAt(len2) - '0' : 0;
            int sum = a + b + carry;
            sb.append(sum % 10);
            carry = sum / 10;
            len1--;
            len2--;
        }
        if (carry > 0){
            sb.append(carry);
        }
        return sb.reverse().toString();
    }


    public static void main(String[] args) {
        Solution415 solution415 = new Solution415();
    }
}