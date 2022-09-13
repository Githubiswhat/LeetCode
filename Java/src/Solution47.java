import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * @author windows
 */
public class Solution47 {

    public List<List<Integer>> permuteUnique(int[] nums) {
        ArrayList<List<Integer>> lists = new ArrayList<>();
        Arrays.sort(nums);
        boolean[] used = new boolean[nums.length];
        dfs(lists, new ArrayList<Integer>(), nums, used);
        return lists;
    }

    private void dfs(List<List<Integer>> lists, List<Integer> list, int[] nums, boolean[] used) {
        if (list.size() == nums.length){
            lists.add(new ArrayList<>(list));
            return;
        }
        for (int i = 0; i < nums.length; i++) {
            if (i > 0 && nums[i] == nums[i-1] && used[i-1] == true) {
                continue;
            }
            if (used[i] == false) {
                list.add(nums[i]);
                used[i] = true;
                dfs(lists, list, nums, used);
                list.remove(list.size() - 1);
                used[i] = false;
            }
        }
    }

    public static void main(String[] args) {
        Solution47 solution47 = new Solution47();
        List<List<Integer>> lists = solution47.permuteUnique(new int[]{3, 3, 0, 3});
        System.out.println(lists.toString());
    }
}
