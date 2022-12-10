package LCP;

import java.util.HashMap;

/**
 * @author windows
 */
public class Solution39 {
    public int minimumSwitchingTimes(int[][] source, int[][] target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < source.length; i++) {
            for (int j = 0; j < source[i].length; j++) {
                map.put(source[i][j], map.getOrDefault(source[i][j], 0) + 1);
            }
        }
        int count = 0;
        for (int i = 0; i < target.length; i++) {
            for (int j = 0; j < target[i].length; j++) {
                if (map.containsKey(target[i][j]) && map.get(target[i][j]) > 0){
                    map.put(target[i][j], map.get(target[i][j]) - 1);
                }else{
                    count++;
                }
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution39 solution39 = new Solution39();
        System.out.println(solution39.minimumSwitchingTimes(new int[][]{{1, 2, 3}, {4, 5, 6}}, new int[][]{{1, 3, 5}, {2, 3, 4}}));
    }
}