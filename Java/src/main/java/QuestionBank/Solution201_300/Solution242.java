package QuestionBank.Solution201_300;

/**
 * @author windows
 */
public class Solution242 {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()){
            return false;
        }
        int[] chars = new int[26];
        for (int i = 0; i < s.length(); i++) {
            chars[s.charAt(i) - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            if (chars[t.charAt(i) - 'a'] == 0){
                return false;
            }else{
                chars[t.charAt(i) - 'a']--;
            }
        }
        return true;
    }


    public static void main(String[] args) {
        Solution242 solution242 = new Solution242();
    }
}