package QuestionBank.Solution1301_1400;
/**
 * @author windows
 */
public class Solution1370 {
    public String sortString(String s) {
        int[] chars = new int[26];
        for (int i = 0; i < s.length(); i++) {
            chars[s.charAt(i) - 'a']++;
        }
        int len = s.length();
        StringBuilder sb = new StringBuilder();
        while(len > 0){
            for (int i = 0; i < chars.length; i++) {
                if (chars[i] > 0){
                    sb.append((char) ('a' + i));
                    chars[i]--;
                    len--;
                }
            }
            for (int i = chars.length - 1; i >= 0 ; i--) {
                if (chars[i] > 0) {
                    sb.append((char) ('a' + i));
                    chars[i]--;
                    len--;
                }
            }
        }
        return sb.toString();
    }
    
    
    public static void main(String[] args) {
        Solution1370 solution1370 = new Solution1370();
        System.out.println(solution1370.sortString("aaaabbbbcccc"));
    }
}