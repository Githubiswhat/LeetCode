package OfferQuestion;

/**
 * @author windows
 */
public class Solution0109 {
    public boolean isFlipedString(String s1, String s2) {
        if (s1.length() != s2.length()){
            return false;
        }
        s2 += s2;
        int index = s2.indexOf(s1);
        return index != -1;
    }


}
