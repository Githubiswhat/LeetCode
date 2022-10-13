package LCS;

import java.util.*;

/**
 * @author windows
 */
public class Solution2 {
    public int halfQuestions(int[] questions) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < questions.length; i++) {
            map.put(questions[i], map.getOrDefault(questions[i], 0) + 1);
        }
        Set<Map.Entry<Integer, Integer>> entries = map.entrySet();
        List<Map.Entry<Integer, Integer>> list = new ArrayList(entries);
        Collections.sort(list, (o1, o2) -> o2.getValue() - o1.getValue());
        int sum = 0;
        int index = 0;
        while(sum < questions.length / 2){
            sum += list.get(index++).getValue();
        }
        return index;
    }
    
    
    public static void main(String[] args) {
        Solution2 solution2 = new Solution2();
    }
}