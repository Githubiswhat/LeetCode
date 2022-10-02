package Solution501_600;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution575 {
    public int distributeCandies(int[] candyType) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < candyType.length; i++) {
            set.add(candyType[i]);
        }
        return Math.min(set.size(), candyType.length /2);
    }



    public static void main(String[] args) {
        Solution575 solution575 = new Solution575();
    }
}