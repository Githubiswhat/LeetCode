package Solution501_600;

/**
 * @author windows
 */
public class Solution520 {
    public boolean detectCapitalUse(String word) {
        return word.toUpperCase().equals(word)
                || word.toLowerCase().equals(word)
                || (Character.isLetter(word.charAt(0) + 32) && word.substring(1).equals(word.substring(1).toLowerCase()));
    }


    public static void main(String[] args) {
        Solution520 solution520 = new Solution520();
        System.out.println(solution520.detectCapitalUse("Leetcode"));
    }
}