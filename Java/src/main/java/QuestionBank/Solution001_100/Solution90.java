package QuestionBank.Solution001_100;

import java.util.*;

/**
 * @author windows
 */
public class Solution90 {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> lists = new ArrayList<>();
        Deque<Integer> list = new LinkedList<>();
        dfs(lists, list, nums, 0);
        return lists;
    }

    private void dfs(List<List<Integer>> lists, Deque<Integer> list, int[] nums, int begin) {
        if (begin > nums.length){
            return;
        }
        HashSet<Integer> set = new HashSet<>();
        lists.add(new ArrayList<>(list));
        for (int i = begin; i < nums.length; i++) {
            if (set.contains(nums[i])){
                continue;
            }else{
                set.add(nums[i]);
            }
            list.add(nums[i]);
            dfs(lists, list, nums, i + 1);
            list.removeLast();
        }
    }





    public static void main(String[] args) {
        Solution90 solution90 = new Solution90();
    }
}