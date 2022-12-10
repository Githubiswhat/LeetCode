package QuestionBank.Solution401_500;

/**
 * @author windows
 */
public class Solution482 {
    public String licenseKeyFormatting(String s, int k) {
        StringBuilder sb = new StringBuilder();
        int len = s.length() - 1;
        int temp = k;
        while(len >= 0){
            if (s.charAt(len) != '-'){
                sb.append(Character.toUpperCase(s.charAt(len)));
                temp--;
                if(temp == 0){
                    sb.append('-');
                    temp = k;
                }
            }
            len--;
        }
        if (sb.length() > 0 && sb.charAt(sb.length() - 1) == '-'){
            return sb.reverse().substring(1);
        }
        return sb.reverse().toString();
    }


    public static void main(String[] args) {
        Solution482 solution482 = new Solution482();
    }
}