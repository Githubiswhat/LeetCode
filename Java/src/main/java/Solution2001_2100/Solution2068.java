package Solution2001_2100;    
/**
 * @author windows
 */
public class Solution2068 {
    public boolean checkAlmostEquivalent(String word1, String word2) {
        int[] chars = new int[26];
        for (int i = 0; i < word1.length(); i++) {
            chars[word1.charAt(i) - 'a']++;
        }
        int[] chars1 = new int[26];
        for (int i = 0; i < word2.length(); i++) {
            chars1[word2.charAt(i) - 'a']++;
        }
        for (int i = 0; i < chars.length; i++) {
            if (Math.abs(chars1[i] - chars[i]) > 3){
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution2068 solution2068 = new Solution2068();
    }
}