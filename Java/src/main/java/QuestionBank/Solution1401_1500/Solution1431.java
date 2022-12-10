package QuestionBank.Solution1401_1500;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution1431 {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        boolean[] res = new boolean[candies.length];
        ArrayList<Boolean> list = new ArrayList<>(candies.length);
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < candies.length; i++) {
            max = Math.max(max, candies[i]);
        }
        for (int i = 0; i < candies.length; i++) {
            if (candies[i] + extraCandies >= max){
                list.add(true);
            }else{
                list.add(false);
            }
        }
        return list;
    }
    
    
    public static void main(String[] args) {
        Solution1431 solution1431 = new Solution1431();
    }
}