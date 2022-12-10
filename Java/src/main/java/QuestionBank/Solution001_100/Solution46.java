package QuestionBank.Solution001_100;

import java.util.ArrayList;
import java.util.List;


/**
 * @author windows
 */
public class Solution46 {
    public static void main(String[] args) {
        Solution46 solution46 = new Solution46();
        List<List<Integer>> permute = solution46.permute(new int[]{1, 2, 3});
        for (List list : permute) {
            System.out.println(list.toString());
        }
    }

    public List<List<Integer>> permute(int[] nums) {
        boolean[] used = new boolean[nums.length];
        List<List<Integer>> lists = new ArrayList<>();
        dfs(lists, new ArrayList<>(), nums, used);
        return lists;
    }

    private void dfs(List<List<Integer>> lists, List<Integer> list, int[] nums, boolean[] used) {
        if (list.size() == nums.length) {
            lists.add(new ArrayList<>(list));
            return;
        }
        for (int i = 0; i < nums.length; i++) {
            if (used[i] == false) {
                list.add(nums[i]);
                used[i] = true;
                dfs(lists, list, nums, used);
                used[i] = false;
                list.remove(list.size() - 1);
            }
        }
    }
}
