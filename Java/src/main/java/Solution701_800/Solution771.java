package Solution701_800;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution771 {
    public int numJewelsInStones(String jewels, String stones) {
        HashSet<Character> set = new HashSet<>();
        for (int i = 0; i < jewels.length(); i++) {
            set.add(jewels.charAt(i));
        }
        int count = 0;
        for (int i = 0; i < stones.length(); i++) {
            if (set.contains(stones.charAt(i))){
                count++;
            }
        }
        return count;
    }


    public static void main(String[] args) {
        Solution771 solution771 = new Solution771();
    }
}