package QuestionBank.Solution1601_1700;
/**
 * @author windows
 */
public class Solution1662 {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        StringBuilder sb1 = new StringBuilder();
        for (int i = 0; i < word1.length; i++) {
            sb1.append(word1[i]);
        }
        StringBuilder sb2 = new StringBuilder();
        for (int i = 0; i < word2.length; i++) {
            sb2.append(word2[i]);
        }
        return sb1.toString().equals(sb2.toString());
    }


    
    
    public static void main(String[] args) {
        Solution1662 solution1662 = new Solution1662();
    }
}