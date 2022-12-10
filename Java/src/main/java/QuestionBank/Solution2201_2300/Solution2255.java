package QuestionBank.Solution2201_2300;
/**
 * @author windows
 */
public class Solution2255 {
    public int countPrefixes(String[] words, String s) {
        int count = 0;
        for (int i = 0; i < words.length; i++) {
            if (s.startsWith(words[i])) {
                count++;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution2255 solution2255 = new Solution2255();
    }
}