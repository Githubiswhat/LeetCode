package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution67 {

    public String addBinary(String a, String b) {
        int indexA = a.length() - 1;
        int indexB = b.length() - 1;
        int carry = 0;
        StringBuilder sb = new StringBuilder();
        while(indexA >= 0 || indexB >= 0){
            int aa = indexA >= 0 ? a.charAt(indexA) - '0' : 0;
            int bb = indexB >= 0 ? b.charAt(indexB) - '0' : 0;
            int sum = aa + bb + carry;
            sb.append(sum % 2);
            carry = sum / 2;
            indexA--;
            indexB--;
        }
        if (carry != 0){
            sb.append(carry);
        }
        return sb.reverse().toString();
    }

    public static void main(String[] args) {
        Solution67 solution67 = new Solution67();
        System.out.println(solution67.addBinary("1010", "1011"));
    }
}