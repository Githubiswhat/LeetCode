package QuestionBank.Solution001_100;

import java.util.*;

/**
 * @author windows
 */
public class Solution49 {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> map = new HashMap<>();
        for (int i = 0; i < strs.length; i++) {
            char[] chars = strs[i].toCharArray();
            Arrays.sort(chars);
            String str = new String(chars);
            List<String> list = map.getOrDefault(str, new ArrayList<String>());
            list.add(strs[i]);
            map.put(str, list);
        }
        ArrayList<List<String>> res = new ArrayList<>();
        for (Map.Entry<String, List<String>> entry : map.entrySet()) {
            res.add(entry.getValue());
        }
        return res;
    }


    public static void main(String[] args) {
        Solution49 solution49 = new Solution49();
    }
}