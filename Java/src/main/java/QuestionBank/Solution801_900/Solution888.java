package QuestionBank.Solution801_900;

import java.util.HashSet;


/**
 * @author windows
 */
public class Solution888 {
    public int[] fairCandySwap(int[] aliceSizes, int[] bobSizes) {
        int aliceNum = 0;
        for (int i = 0; i < aliceSizes.length; i++) {
            aliceNum += aliceSizes[i];
        }
        int bobNum = 0;
        HashSet<Integer> set = new HashSet<Integer>();
        for (int i = 0; i < bobSizes.length; i++) {
            bobNum += bobSizes[i];
            set.add(bobSizes[i]);
        }
        int sub = aliceNum - bobNum;
        for (int i = 0; i < aliceSizes.length; i++) {
            if (set.contains(aliceSizes[i] - sub / 2)){
                return new int[]{aliceSizes[i], aliceSizes[i] - sub / 2};
            }
        }
        return new int[2];
    }


    public static void main(String[] args) {
        Solution888 solution888 = new Solution888();
    }
}