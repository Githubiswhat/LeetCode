package OfferQuestion;

/**
 * @author windows
 */
public class Solution0102 {

    public boolean CheckPermutation(String s1, String s2) {
        int[] num1 = new int[26];
        int[] num2 = new int[26];
        for (int i = 0; i < s1.length(); i++) {
            num1[s1.charAt(i) - 'a']++;
        }
        for (int i = 0; i < s2.length(); i++) {
            num2[s2.charAt(i) - 'a']++;
        }
        for (int i = 0; i < num1.length; i++) {
            if (num1[i] != num2[i]){
                return false;
            }
        }
        return true;
    }


}
