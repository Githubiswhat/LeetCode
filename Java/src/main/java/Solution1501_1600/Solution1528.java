package Solution1501_1600;    
/**
 * @author windows
 */
public class Solution1528 {
    public String restoreString(String s, int[] indices) {
        char[] chars = new char[s.length()];
        for (int i = 0; i < s.length(); i++) {
            chars[indices[i]] = s.charAt(i);
        }
        return new String(chars);
    }
    
    
    public static void main(String[] args) {
        Solution1528 solution1528 = new Solution1528();
    }
}