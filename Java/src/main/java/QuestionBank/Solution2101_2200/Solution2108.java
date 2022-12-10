package QuestionBank.Solution2101_2200;
/**
 * @author windows
 */
public class Solution2108 {
    public String firstPalindrome(String[] words) {
        for (int i = 0; i < words.length; i++) {
            StringBuilder sb = new StringBuilder(words[i]);
            if (sb.reverse().toString().equals(words[i])){
                return words[i];
            }
        }
        return "";
    }
    
    
    public static void main(String[] args) {
        Solution2108 solution2108 = new Solution2108();
    }
}