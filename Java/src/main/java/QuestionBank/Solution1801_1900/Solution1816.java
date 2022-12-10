package QuestionBank.Solution1801_1900;
/**
 * @author windows
 */
public class Solution1816 {
    public String truncateSentence(String s, int k) {
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' '){
                if (--k == 0){
                    return s.substring(0, i);
                }
            }
        }
        return s;
    }
    
    
    public static void main(String[] args) {
        Solution1816 solution1816 = new Solution1816();
    }
}