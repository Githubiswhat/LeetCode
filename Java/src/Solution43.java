import java.util.ArrayList;

public class Solution43 {

    public String multiply(String num1, String num2) {
        int i = num1.length() - 1;
        ArrayList<String> lists = new ArrayList<>();
        int index = 0;
        while (i >= 0) {
            int a = num1.charAt(i--) - '0';
            int carry = 0;
            StringBuilder sb1 = new StringBuilder();
            for (int j = num2.length() - 1; j >= 0; j--) {
                int b = num2.charAt(j) - '0';
                int multiply = a * b + carry;
                carry = multiply / 10;
                multiply = multiply % 10;
                sb1.append(multiply);
            }
            if (carry > 0) {
                sb1.append(carry);
            }
            sb1 = sb1.reverse();
            for (int j = 0; j < index; j++) {
                sb1.append('0');
            }
            index++;
            lists.add(sb1.toString());
        }
        String result = "0";
        for (String str : lists) {
            StringBuilder sb = new StringBuilder();
            int carry = 0;
            int j = str.length() - 1;
            int k = result.length() - 1;
            while (j >= 0 && k >= 0){
                int a = str.charAt(j--) - '0';
                int b = result.charAt(k--) - '0';
                int sum = a + b + carry;
                carry = sum / 10;
                sb.append(sum % 10);
            }
            while (j >= 0){
                int a = str.charAt(j--) - '0';
                int sum = a + carry;
                carry = sum / 10;
                sb.append(sum % 10);
            }
            while (k >= 0){
                int a = str.charAt(k--) - '0';
                int sum = a + carry;
                carry = sum / 10;
                sb.append(sum % 10);
            }
            if (carry > 0){
                sb.append(carry);
            }
            result = sb.reverse().toString();
        }
        int count = 0;
        for (int j = 0; j < result.length(); j++) {
            if (result.charAt(j) == '0'){
                count++;
            }
        }
        return count == result.length()? "0" : result;
    }

    public static void main(String[] args) {
        Solution43 solution43 = new Solution43();
        String multiply = solution43.multiply("100", "00000");
        System.out.println(multiply);
    }



}
