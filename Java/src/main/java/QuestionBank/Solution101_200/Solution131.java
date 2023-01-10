package QuestionBank.Solution101_200;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution131 {
    public List<List<String>> partition(String s) {
        List<List<String>> res = new ArrayList<>();
        traceBack(res, s, 0, new ArrayList<>());
        return res;
    }

    private void traceBack(List<List<String>> result, String s, int begin, List<String> list){
        if (begin == s.length()){
            result.add(new ArrayList<>(list));
        }
        for (int i = begin; i < s.length(); i++) {
            if (!checkPalindrome(s, begin, i)){
                continue;
            }
            list.add(s.substring(begin, i + 1));
            traceBack(result, s, i + 1, list);
            list.remove(list.size() - 1);
        }
    }

    private boolean checkPalindrome(String s, int left, int right){
        for (int i = left, j = right; i < j; i++, j--) {
            if (s.charAt(i) != s.charAt(j)){
                return false;
            }
        }
        return true;
    }


    public static void main(String[] args) {
        Solution131 solution131 = new Solution131();
    }
}