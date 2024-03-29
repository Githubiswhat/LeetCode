package QuestionBank.Solution001_100;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution21 {

    public List<String> generateParenthesis(int n) {
        int left = n;
        int right = n;
        List<String> res = new ArrayList<>();
        dfs(res, n, n , new StringBuilder());
        return res;
    }

    private void dfs(List<String> res, int left, int right, StringBuilder sb){
        if (left == right && left == 0){
            res.add(sb.toString());
        }
        if (left > 0){
            sb.append('(');
            dfs(res, left - 1, right, sb);
            sb.deleteCharAt(sb.length()- 1);
        }
        if (left < right) {
            sb.append(')');
            dfs(res, left, right - 1, sb);
            sb.deleteCharAt(sb.length()- 1);
        }
    }





    public static void main(String[] args) {
        Solution21 solution21 = new Solution21();
        System.out.println(solution21.generateParenthesis(3));
    }
}