package QuestionBank.Solution1101_1200;
/**
 * @author windows
 */
public class Solution1160 {
    public int countCharacters(String[] words, String chars) {
        int[] character = new int[26];
        int sum = 0;
        for (int i = 0; i < chars.length(); i++) {
            character[chars.charAt(i) - 'a']++;
        }
        for (int i = 0; i < words.length; i++) {
            int[] wordChar = new int[26];
            for (int j = 0; j < words[i].length(); j++) {
                wordChar[words[i].charAt(j) - 'a']++;
            }
            boolean found = true;
            for (int j = 0; j < 26; j++) {
                if (character[j] < wordChar[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                sum += words[i].length();
            }
        }
        return sum;
    }
    
    
    public static void main(String[] args) {
        Solution1160 solution1160 = new Solution1160();
    }
}