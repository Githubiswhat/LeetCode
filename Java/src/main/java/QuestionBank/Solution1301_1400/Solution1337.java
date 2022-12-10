package QuestionBank.Solution1301_1400;

import java.util.*;

/**
 * @author windows
 */
public class Solution1337 {
    public int[] kWeakestRows(int[][] mat, int k) {
        Map<Integer, List<Integer>> map = new TreeMap<>();
        for (int i = 0; i < mat.length; i++) {
            int count = 0;
            for (int j = 0; j < mat[i].length; j++) {
                if (mat[i][j] == 1){
                    count++;
                }else{
                    break;
                }
            }
            List list = map.getOrDefault(count, new ArrayList());
            list.add(i);
            map.put(count, list);
        }
        int[] res = new int[k];
        int index = 0;
        while (k > 0){
            for (Map.Entry<Integer, List<Integer>> entry: map.entrySet()) {
                List<Integer> list = entry.getValue();
                for (int i = 0; i < list.size(); i++) {
                    res[index++] = list.get(i);
                    k--;
                    if (k <= 0){
                        return  res;
                    }
                }
            }
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1337 solution1337 = new Solution1337();
        System.out.println(Arrays.toString(solution1337.kWeakestRows(new int[][]{{1, 1, 0, 0, 0}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 0}, {1, 1, 0, 0, 0}, {1, 1, 1, 1, 1}}, 3)));
    }
}