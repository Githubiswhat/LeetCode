package QuestionBank.Solution1101_1200;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution1128 {
    public static void main(String[] args) {
        Solution1128 solution1128 = new Solution1128();
    }

    public int numEquivDominoPairs(int[][] dominoes) {
        HashMap<String, Integer> map = new HashMap<>();
        for (int i = 0; i < dominoes.length; i++) {
            Arrays.sort(dominoes[i]);
            String str = String.valueOf(dominoes[i][0]) + String.valueOf(dominoes[i][1]);
            map.put(str, map.getOrDefault(str, 0) + 1);
        }
        int sum = 0;
        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            if (entry.getValue() > 1){
                sum += (entry.getValue() * (entry.getValue() - 1) / 2);
            }
        }
        return sum;
    }
}