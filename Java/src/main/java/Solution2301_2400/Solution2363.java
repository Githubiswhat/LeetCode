package Solution2301_2400;

import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;

/**
 * @author windows
 */
public class Solution2363 {
    public List<List<Integer>> mergeSimilarItems(int[][] items1, int[][] items2) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < items1.length; i++) {
            map.put(items1[i][0], map.getOrDefault(items1[i][0], 0) + items1[i][1]);
        }
        for (int i = 0; i < items2.length; i++) {
            map.put(items2[i][0], map.getOrDefault(items2[i][0], 0) + items2[i][1]);
        }
        ArrayList<List<Integer>> res = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            res.add(Stream.of(entry.getKey(), entry.getValue()).collect(Collectors.toList()));
        }
        Collections.sort(res, (o1, o2) -> o1.get(0) - o2.get(0));
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution2363 solution2363 = new Solution2363();
    }
}