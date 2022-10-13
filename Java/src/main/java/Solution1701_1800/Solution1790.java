package Solution1701_1800;    
/**
 * @author windows
 */
public class Solution1790 {
    public boolean areAlmostEqual(String s1, String s2) {
        int[] chars1 = new int[26];
        int count = 0;
        for (int i = 0; i < s1.length(); i++) {
            if(s1.charAt(i) != s2.charAt(i)){
                count++;
            }
        }
        if (count != 2 && count != 0){
            return false;
        }
        for (int i = 0; i < s1.length(); i++) {
            chars1[s1.charAt(i) - 'a']++;
        }
        int[] chars2 = new int[26];
        for (int i = 0; i < s2.length(); i++) {
            chars2[s2.charAt(i) - 'a']++;
        }
        for (int i = 0; i < chars1.length; i++) {
            if (chars1[i] != chars2[i]){
                return false;
            }
        }
        return true;
    }
    
    public static void main(String[] args) {
        Solution1790 solution1790 = new Solution1790();
    }
}