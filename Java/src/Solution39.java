import java.util.*;
/**
 * @author windows
 */
public class Solution39 {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> lists = new ArrayList<>();
        dfs(candidates, 0, new ArrayList<>(), lists, target, 0);
        return lists;
    }

    private void dfs(int[] candidates, int begin, List<Integer> list, List<List<Integer>> lists, int target, int sum) {
        if (sum >= target){
            if (sum == target){
                lists.add(new ArrayList(list));
            }
            return;
        }
        for (int i = begin; i < candidates.length; i++) {
            list.add(candidates[i]);
            dfs(candidates, i, list, lists, target, sum + candidates[i]);
            list.remove(list.size() - 1);
        }
    }

    public static void main(String[] args) {
        Solution39 solution39 = new Solution39();
        List<List<Integer>> lists = solution39.combinationSum(new int[]{2,3,6,7}, 7);
        for (List list : lists){
            System.out.println(list.toString());
        }
    }

}
