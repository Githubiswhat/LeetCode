package QuestionBank.Solution001_100;

import java.util.ArrayList;
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;

/**
 * @author windows
 */
public class Solution78 {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> lists = new ArrayList<>();
        Deque<Integer> list = new LinkedList<>();
        process(lists, list, nums, 0);
        return lists;
    }

    private void process(List<List<Integer>> lists, Deque<Integer> list, int[] nums, int begin){
        if(begin > nums.length){
            return;
        }
        lists.add(new ArrayList<>(list));
        for (int i = begin; i < nums.length; i++) {
            list.add(nums[i]);
            process(lists, list, nums, i + 1);
            list.removeLast();
        }
    }


    public static void main(String[] args) {
        Solution78 solution78 = new Solution78();
    }
}