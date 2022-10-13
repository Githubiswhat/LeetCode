package Solution301_400;

/**
 * @author windows
 */
public class Solution392 {

    public boolean isSubsequence(String s, String t) {
        int i = 0;
        int j = 0;
        if(s.length() == 0){
            return true;
        }
        for (; i < s.length(); i++) {
            if (j == t.length()){
                return false;
            }
            for (; j < t.length(); j++) {
                if (t.charAt(j) == s.charAt(i)){
                    j++;
                    break;
                }
            }
        }
        return s.charAt(i - 1) == t.charAt(j - 1);
    }

    public static void main(String[] args) {
        Solution392 solution392 = new Solution392();
        System.out.println(solution392.isSubsequence("abc", "ahbgdc"));
    }
}