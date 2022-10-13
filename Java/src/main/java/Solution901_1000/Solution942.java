package Solution901_1000;

/**
 * @author windows
 */
public class Solution942 {
    public int[] diStringMatch(String s) {
        int[] res = new int[s.length() + 1];
        int min = 0;
        int max = s.length();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'D'){
                res[i] = max--;
            }else{
                res[i] = min++;
            }
        }
        res[s.length()] = min;
        return res;
    }


    public static void main(String[] args) {
        Solution942 solution942 = new Solution942();
    }
}