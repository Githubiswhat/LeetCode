package Solution001_100;

import java.util.*;
/**
 * @author windows
 */
public class Solution40 {

    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        ArrayList<List<Integer>> lists = new ArrayList<>();
        HashSet<Integer> set = new HashSet();
        dfs(candidates, target, new ArrayList(), lists, 0, set);
        ArrayList<List<Integer>> result = new ArrayList<>();
        return lists;
    }

    private void dfs(int[] candidates, int target, List<Integer> list, List<List<Integer>> lists, int begin, HashSet<Integer> set) {
        if (target <= 0){
            if (target == 0){
                lists.add(new ArrayList(list));
            }
            return;
        }
        for (int i = begin; i < candidates.length; i++) {
            list.add(candidates[i]);
            dfs(candidates, target - candidates[i], list, lists, i + 1, set);
            list.remove(list.size() - 1);
        }
    }

    public static void main(String[] args) {
        Solution40 solution40 = new Solution40();
        List<List<Integer>> lists = solution40.combinationSum2(new int[]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 30);
        for (List list: lists) {
            System.out.println(list.toString());
        }
    }
}
