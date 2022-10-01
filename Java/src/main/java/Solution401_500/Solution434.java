package Solution401_500;

/**
 * @author windows
 */
public class Solution434 {
    public int countSegments(String s) {
        s = s.trim();
        if (s.length() == 0) return 0;
        String[] strings = s.split("[ ]+");
        return strings.length;
    }



    public static void main(String[] args) {
        Solution434 solution434 = new Solution434();
    }
}