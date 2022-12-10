package QuestionBank.Solution1801_1900;
/**
 * @author windows
 */
public class Solution1897 {
    public boolean makeEqual(String[] words) {
        int[] chars = new int[26];
        for (int i = 0; i < words.length; i++) {
            for (int j = 0; j < words[i].length(); j++) {
                chars[words[i].charAt(j) - 'a']++;
            }
        }
        int len = words.length;
        for (int i = 0; i < chars.length; i++) {
            if (chars[i] % len != 0){
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution1897 solution1897 = new Solution1897();
    }
}