package QuestionBank.Solution401_500;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution455 {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);
        int count = 0;
        for (int i = g.length - 1; i >= 0; i--) {
            for (int j = s.length - 1; j >= 0; j--) {
                if (s[j] >= g[i]){
                    count++;
                    s[j] = -1;
                    break;
                }
            }
        }
        return count;
    }


    public static void main(String[] args) {
        Solution455 solution455 = new Solution455();
    }
}