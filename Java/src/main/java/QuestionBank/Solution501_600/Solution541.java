package QuestionBank.Solution501_600;

/**
 * @author windows
 */
public class Solution541 {
    public String reverseStr(String s, int k) {
        StringBuilder sb = new StringBuilder();
        int len = s.length();
        int left = 0;
        while (left + 2 * k <= len) {
            sb.append(new StringBuilder(s.substring(left, left +k)).reverse());
            sb.append(s.substring(left + k, left + 2 * k));
            left += 2 * k;
        }
        if (left + k <= len) {
            sb.append(new StringBuilder(s.substring(left, left + k)).reverse());
            sb.append(s.substring(left + k, len));
        }else{
            sb.append(new StringBuilder(s.substring(left)).reverse());
        }
        return sb.toString();
    }


    public static void main(String[] args) {
        Solution541 solution541 = new Solution541();
    }
}