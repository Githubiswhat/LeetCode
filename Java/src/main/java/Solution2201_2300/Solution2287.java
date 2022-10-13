package Solution2201_2300;    
/**
 * @author windows
 */
public class Solution2287 {
    public int rearrangeCharacters(String s, String target) {
        int[] chars = new int[26];
        for (int i = 0; i < s.length(); i++) {
            chars[s.charAt(i) - 'a']++;
        }
        int[] charsTarget = new int[26];
        for (int i = 0; i < target.length(); i++) {
            charsTarget[target.charAt(i) - 'a']++;
        }
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < chars.length; i++) {
            if (charsTarget[i] != 0){
                min = Math.min(min, chars[i] / charsTarget[i]);
            }
        }
        return min;
    }
    
    
    public static void main(String[] args) {
        Solution2287 solution2287 = new Solution2287();
    }
}