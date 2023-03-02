package QuestionBank.Solution1801_1900;
/**
 * @author windows
 */
public class Solution1813 {
    public boolean areSentencesSimilar(String sentence1, String sentence2) {
        String[] word1 = sentence1.split(" ");
        String[] word2 = sentence2.split(" ");
        int i = 0;
        int j = 0;
        while (i < word1.length && i < word2.length && word1[i].equals(word2[i])) {
            i++;
        }
        while (j < word1.length - i && j < word2.length - i && word1[word1.length - 1 - j].equals(word2[word2.length - 1 - j])) {
            j++;
        }
        return i + j == Math.min(word1.length, word2.length);
    }
    
    
    public static void main(String[] args) {
        Solution1813 solution1813 = new Solution1813();
    }
}