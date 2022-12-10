package QuestionBank.Solution1301_1400;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @author windows
 */
public class Solution1399 {
    public int countLargestGroup(int n) {
        HashMap<Integer, List<Integer>> map = new HashMap<>();
        for (int i = 1; i <= n; i++) {
            int sum = 0;
            int temp = i;
            while(temp > 0){
                sum += temp % 10;
                temp /= 10;
            }
            List<Integer> list = map.getOrDefault(sum, new ArrayList<Integer>());
            list.add(i);
            map.put(sum, list);
        }
        HashMap<Integer, Integer> resMap = new HashMap<>();
        int max = 0;
        for (Map.Entry<Integer, List<Integer>> entry : map.entrySet()){
            max = Math.max(max, entry.getValue().size());
            resMap.put(entry.getValue().size(), resMap.getOrDefault(entry.getValue().size(), 0) + 1);
        }
        return resMap.get(max);
    }
    
    
    public static void main(String[] args) {
        Solution1399 solution1399 = new Solution1399();
        System.out.println(solution1399.countLargestGroup(13));
    }
}