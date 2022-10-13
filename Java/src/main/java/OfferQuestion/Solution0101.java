package OfferQuestion;

/**
 * @author windows
 */
public class Solution0101 {
    public boolean isUnique(String astr) {
        int[] chars = new int[26];
        for (int i = 0; i < astr.length(); i++) {
            if (chars[astr.charAt(i) - 'a']++ != 0){
                return false;
            }
        }
        return true;
    }
}
