package QuestionBank.Solution401_500;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;

/**
 * @author windows
 */
public class Solution414 {
    public int thirdMax(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            set.add(nums[i]);
        }
        ArrayList<Integer> list = new ArrayList(set);
        Collections.sort(list);
        if (list.size() < 3){
            return list.get(list.size() - 1);
        }
        return list.get(list.size() - 3);
    }


    public static void main(String[] args) {
        Solution414 solution414 = new Solution414();
        System.out.println(solution414.thirdMax(new int[]{1, 2147483647, -2147483648}));
    }
}