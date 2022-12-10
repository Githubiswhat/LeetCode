package QuestionBank.Solution2001_2100;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution2053 {
    public String kthDistinct(String[] arr, int k) {
        Map<String, Integer> map = new LinkedHashMap<>();
        for (int i = 0; i < arr.length; i++) {
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }
        ArrayList<String> list = new ArrayList<>();
        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            if (entry.getValue() == 1){
                list.add(entry.getKey());
            }
        }
        if (list.size() < k){
            return "";
        }
        return list.get(k - 1);
    }
    
    
    public static void main(String[] args) {
        Solution2053 solution2053 = new Solution2053();
    }
}