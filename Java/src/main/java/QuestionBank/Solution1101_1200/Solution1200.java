package QuestionBank.Solution1101_1200;

import java.util.*;
import java.util.stream.Stream;

import static java.util.stream.Collectors.toList;

/**
 * @author windows
 */
public class Solution1200 {

    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        HashMap<Integer, List<List<Integer>>> map = new HashMap<>();
        Arrays.sort(arr);
        for (int i = 1; i < arr.length; i++) {
            int sub = arr[i] - arr[i - 1];
            List<List<Integer>> list = map.getOrDefault(sub, new ArrayList<>());
            list.add(Stream.of(arr[i], arr[i - 1]).collect(toList()));
            map.put(sub, list);
        }
        int min = Integer.MAX_VALUE;
        for (Map.Entry<Integer, List<List<Integer>>> entry: map.entrySet()) {
            min = Math.min(min, entry.getKey());
        }
        return map.get(min);
    }

    
    public static void main(String[] args) {
        Solution1200 solution1200 = new Solution1200();
    }
}