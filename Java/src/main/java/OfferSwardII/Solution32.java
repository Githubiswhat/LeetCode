package OfferSwardII;
/**
 * @author windows
 */
public class Solution32 {
    public boolean isAnagram(String s, String t) {
        int[] chars = new int[26];
        int[] chart = new int[26];
        for (int i = 0; i < s.length(); i++) {
            chars[s.charAt(i) - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            chart[t.charAt(i) - 'a']++;
        }
        for (int i = 0; i < chars.length; i++) {
            if (chars[i] != chart[i]){
                return false;
            }
        }
        return !s.equals(t);
    }
    
    
    public static void main(String[] args) {
        Solution32 solution32 = new Solution32();
    }
}