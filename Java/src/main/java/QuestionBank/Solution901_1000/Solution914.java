package QuestionBank.Solution901_1000;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution914 {
    public boolean hasGroupsSizeX(int[] deck) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < deck.length; i++) {
            map.put(deck[i], map.getOrDefault(deck[i], 0) + 1);
        }
        int min = Integer.MAX_VALUE;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            min = Math.min(min, entry.getValue());
        }
        for (int i = 2; i <= min; i++) {
            boolean flag = false;
            for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
                if (entry.getValue() % i != 0){
                    flag = true;
                    break;
                }
            }
            if (!flag){
                return true;
            }
        }
        return false;
    }


    public static void main(String[] args) {
        Solution914 solution914 = new Solution914();
        System.out.println(solution914.hasGroupsSizeX(new int[]{1,1,1,1,2,2,2,2,2,2}));
    }
}