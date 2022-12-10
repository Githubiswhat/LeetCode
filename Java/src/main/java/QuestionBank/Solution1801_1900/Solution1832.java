package QuestionBank.Solution1801_1900;
/**
 * @author windows
 */
public class Solution1832 {
    public boolean checkIfPangram(String sentence) {
        int[] chars = new int[26];
        for (int i = 0; i < sentence.length(); i++) {
            chars[sentence.charAt(i) - 'a']++;
        }
        for (int i = 0; i < chars.length; i++) {
            if (chars[i] < 1){
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution1832 solution1832 = new Solution1832();
    }
}