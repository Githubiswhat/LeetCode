package QuestionBank.Solution2001_2100;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution2078 {
    public int maxDistance(int[] colors) {
        HashMap<Integer, int[]> map = new HashMap<>();
        for (int i = 0; i < colors.length; i++) {
            int[] pos = map.getOrDefault(colors[i], new int[]{-1, -1});
            if (pos[1] == -1) {
                pos[0] = i;
            }
            pos[1] = i;
            map.put(colors[i], pos);
        }
        int max = 0;
        for (Map.Entry<Integer, int[]> entry: map.entrySet()) {
            int[] pos = entry.getValue();
            for (Map.Entry<Integer, int[]> entryInner: map.entrySet()) {
                if (entryInner.getKey() != entry.getKey()){
                    int dis = entryInner.getValue()[1] - pos[0];
                    max = Math.max(max, dis);
                }
            }
        }
        return max;
    }
    
    
    public static void main(String[] args) {
        Solution2078 solution2078 = new Solution2078();
    }
}