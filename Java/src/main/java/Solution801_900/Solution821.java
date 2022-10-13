package Solution801_900;

import java.util.ArrayList;

/**
 * @author windows
 */
public class Solution821 {
    public int[] shortestToChar(String s, char c) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == c){
                list.add(i);
            }
        }
        int[] ans = new int[s.length()];
        for (int i = 0; i < s.length(); i++) {
            int min = Integer.MAX_VALUE;
            for (int j = 0; j < list.size(); j++) {
                min = Math.min(min, Math.abs(list.get(j) - i));
            }
            ans[i] = min;
        }
        return ans;
    }


    public static void main(String[] args) {
        Solution821 solution821 = new Solution821();
    }
}