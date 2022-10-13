package OfferSwardII;
/**
 * @author windows
 */
public class Solution34 {
    public boolean isAlienSorted(String[] words, String order) {
        int[] chars = new int[26];
        for (int i = 0; i < order.length(); i++) {
            chars[order.charAt(i) - 'a'] = i;
        }
        for (int i = 0; i < words.length - 1; i++) {
            int shortLen = words[i].length() > words[i + 1].length() ? words[i + 1].length() : words[i].length();
            boolean found = false;
            for (int j = 0; j < shortLen; j++) {
                if (chars[words[i].charAt(j) - 'a'] < chars[words[i + 1].charAt(j) - 'a']){
                    found = true;
                    break;
                }else if (chars[words[i].charAt(j) - 'a'] > chars[words[i + 1].charAt(j) - 'a']){
                    return  false;
                }
            }
            if(!found && words[i].length() > words[i + 1].length()){
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution34 solution34 = new Solution34();
    }
}