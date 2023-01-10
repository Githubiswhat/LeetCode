package QuestionBank.Solution201_300;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution216 {
    public List<List<Integer>> combinationSum3(int k, int n) {
        int[] nums = new int[9];
        for (int i = 0; i < 9; i++) {
            nums[i] = i + 1;
        }
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        process(nums, 0, k, n, new ArrayList<>(), 0 ,res);
        return res;
    }

    private void process(int[] nums, int begin, int k, int n, List<Integer> list, int sum, List<List<Integer>> lists) {
        if (begin > nums.length){
            return;
        }

        if (list.size() == k){
            if (sum == n){
                lists.add(new ArrayList<>(list));
            }
            return;
        }
        for (int i = begin; i < nums.length; i++) {
            if (sum + nums[i] > n){
                break;
            }
            sum += nums[i];
            list.add(nums[i]);
            process(nums, i + 1, k, n, list, sum, lists);
            sum -= nums[i];
            list.remove(list.size() - 1);
        }
    }


    public static void main(String[] args) {
        Solution216 solution216 = new Solution216();
        System.out.println(solution216.combinationSum3(9, 45));
    }
}