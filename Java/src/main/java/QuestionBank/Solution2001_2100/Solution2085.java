package QuestionBank.Solution2001_2100;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution2085 {
    public int countWords(String[] words1, String[] words2) {
        HashMap<String, Integer> map1 = new HashMap<>();
        for (int i = 0; i < words1.length; i++) {
            map1.put(words1[i], map1.getOrDefault(words1[i], 0) + 1);
        }
        HashMap<String, Integer> map2 = new HashMap<>();
        for (int i = 0; i < words2.length; i++) {
            map2.put(words2[i], map2.getOrDefault(words2[i], 0) + 1);
        }
        int count = 0;
        for (Map.Entry<String, Integer> entry : map1.entrySet()) {
            if (entry.getValue() == 1 && map2.containsKey(entry.getKey()) && map2.get(entry.getKey()) == 1){
                count++;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution2085 solution2085 = new Solution2085();
        System.out.println(solution2085.countWords(new String[]{"leetcode", "is", "amazing", "as", "is"}, new String[]{"amazing", "leetcode", "is"}));
    }
}