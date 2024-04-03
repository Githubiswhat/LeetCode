package QuestionBank.Solution2801_2900;
/**
 * @author windows
 */
public class Solution2810 {

    public String finalString(String s) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'i'){
                sb.reverse();
            }else {
                sb.append(s.charAt(i));
            }
        }
        return sb.toString();
    }
    
    
    public static void main(String[] args) {
        Solution2810 solution2810 = new Solution2810();
    }
}