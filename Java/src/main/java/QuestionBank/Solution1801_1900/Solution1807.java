package QuestionBank.Solution1801_1900;

import java.util.HashMap;
import java.util.List;

/**
 * @author windows
 */
public class Solution1807 {

    public String evaluate(String s, List<List<String>> knowledge) {
        HashMap<String, String> map = new HashMap<>();
        for (List<String> list : knowledge) {
            map.put(list.get(0), list.get(1));
        }
        StringBuilder sb = new StringBuilder();
        while (s.indexOf('(') != -1) {
            int left = s.indexOf('(');
            int right = s.indexOf(')');
            String key = s.substring(left + 1, right);
            String value = map.getOrDefault(key, "?");
            sb.append(s, 0, left);
            sb.append(value);
            s = s.substring(right + 1);
        }
        return sb.append(s).toString();
    }
    
    
    public static void main(String[] args) {
        Solution1807 solution1807 = new Solution1807();
    }
}