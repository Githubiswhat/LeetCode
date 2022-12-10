package QuestionBank.Solution2101_2200;
/**
 * @author windows
 */
public class Solution2114 {
    public int mostWordsFound(String[] sentences) {
        int max = 0;
        for (int i = 0; i < sentences.length; i++) {
            max = Math.max(sentences[i].split(" ").length, max);
        }
        return max;
    }
    
    
    public static void main(String[] args) {
        Solution2114 solution2114 = new Solution2114();
    }
}