package QuestionBank.Solution1301_1400;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution1394 {
    public int findLucky(int[] arr) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < arr.length; i++) {
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }
        ArrayList<Integer> list = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if ((int)entry.getValue() == entry.getKey()){
                list.add(entry.getValue());
            }
        }
        if (list.size() > 0){
            Collections.sort(list);
            return list.get(list.size() - 1);
        }
        return -1;
    }
    
    
    public static void main(String[] args) {
        Solution1394 solution1394 = new Solution1394();
    }
}