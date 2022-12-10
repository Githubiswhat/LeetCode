package QuestionBank.Solution2101_2200;
/**
 * @author windows
 */
public class Solution2185 {
    public int prefixCount(String[] words, String pref) {
        int count = 0;
        for (int i = 0; i < words.length; i++) {
            if (words[i].startsWith(pref)){
                count++;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution2185 solution2185 = new Solution2185();
    }
}