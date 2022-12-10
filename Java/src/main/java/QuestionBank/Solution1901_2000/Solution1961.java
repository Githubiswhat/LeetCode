package QuestionBank.Solution1901_2000;
/**
 * @author windows
 */
public class Solution1961 {
    public boolean isPrefixString(String s, String[] words) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < words.length; i++) {
            sb.append(words[i]);
        }
        return sb.indexOf(s) == 0;
    }
    
    
    public static void main(String[] args) {
        Solution1961 solution1961 = new Solution1961();
    }
}