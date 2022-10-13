package Solution901_1000;

/**
 * @author windows
 */
public class Solution953 {
    public boolean isAlienSorted(String[] words, String order) {
        int[] chars = new int[26];
        for (int i = 0; i < order.length(); i++) {
            chars[order.charAt(i) - 'a'] = i;
        }
        for (int i = 1; i < words.length; i++) {
            int length = words[i].length() <= words[i - 1].length() ? words[i].length() : words[i - 1].length();
            int j = 0;
            for (; j < length; j++) {
                if (chars[words[i- 1].charAt(j) - 'a'] < chars[words[i].charAt(j) - 'a']){
                    break;
                }else if (chars[words[i- 1].charAt(j) - 'a'] > chars[words[i].charAt(j) - 'a']){
                    return false;
                }
            }
            if (j == length && words[i].length() < words[i - 1].length()){
                return false;
            }
        }
        return true;
    }


    public static void main(String[] args) {
        Solution953 solution953 = new Solution953();
    }
}