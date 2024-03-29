package QuestionBank.Solution001_100;


import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @author windows
 */
public class Solution17 {
    public List<String> letterCombinations(String digits) {
        if (digits.length() == 0){
            return new ArrayList<>();
        }
        Map<Character, String> phoneMap = new HashMap<Character, String>() {{
            put('2', "abc");
            put('3', "def");
            put('4', "ghi");
            put('5', "jkl");
            put('6', "mno");
            put('7', "pqrs");
            put('8', "tuv");
            put('9', "wxyz");
        }};
        ArrayList<String> res = new ArrayList<>();
        StringBuilder sb = new StringBuilder();
        dfs(phoneMap, 0, digits, res, sb);
        return res;
    }

    private void dfs(Map<Character, String> phoneMap, int index, String digits, List<String> res, StringBuilder sb) {
        if (index == digits.length()) {
            res.add(sb.toString());
            return;
        }
        String s = phoneMap.get(digits.charAt(index));
        for (int i = 0; i < s.length(); i++) {
            sb.append(s.charAt(i));
            dfs(phoneMap, index + 1, digits, res, sb);
            sb.deleteCharAt(sb.length() - 1);
        }
    }



    public static void main(String[] args) {
        Solution17 solution17 = new Solution17();
    }
}