package Solution1001_1100;

import java.util.ArrayList;
import java.util.Arrays;

/**
 * @author windows
 */
public class Solution1046 {
    public int lastStoneWeight(int[] stones) {
        ArrayList<Integer> list = new ArrayList<>();
        int countZero = 0;
        while(countZero < stones.length - 1){
            Arrays.sort(stones);
            int a = stones[stones.length - 1];
            int b = stones[stones.length - 2];
            if (a - b == 0){
                countZero++;
            }
            stones[stones.length - 1] = a - b;
            stones[stones.length - 2] = 0;
            countZero++;
        }
        if (countZero == stones.length - 1){
            for (int i = 0; i < stones.length; i++) {
                if (stones[i] != 0){
                    return stones[i];
                }
            }
        }
        return 0;
    }
    
    
    public static void main(String[] args) {
        Solution1046 solution1046 = new Solution1046();
        System.out.println(new Solution1046().lastStoneWeight(new int[]{2, 7, 4, 1, 8, 1}));
    }
}