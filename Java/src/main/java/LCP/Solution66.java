package LCP;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution66 {
    public int minNumBooths(String[] demand) {
        for (int i = 0; i < demand.length; i++) {
            HashSet<Character> set = new HashSet<>();
            for (int j = 0; j < demand[i].length(); j++) {
                if (!set.contains(demand[i].charAt(j))) {
                    set.add(demand[i].charAt(j));
                }
            }

        }
        return 0;
    }
    
    
    public static void main(String[] args) {
        Solution66 solution66 = new Solution66();
    }
}