package Solution1201_1300;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution1217 {
    public int minCostToMoveChips(int[] position) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < position.length; i++) {
            map.put(position[i], map.getOrDefault(position[i], 0) + 1);
        }
        int odd = 0;
        int even = 0;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getKey() % 2 == 0){
                even += entry.getValue();
            }else{
                odd += entry.getValue();
            }
        }
        return Math.min(odd, even);
    }
    
    
    public static void main(String[] args) {
        Solution1217 solution1217 = new Solution1217();
    }
}