package QuestionBank.Solution2001_2100;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * @author windows
 */
public class Solution2089 {
    public List<Integer> targetIndices(int[] nums, int target) {
        Arrays.sort(nums);
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == target){
                list.add(i);
            }
        }
        return list;
    }

    
    
    public static void main(String[] args) {
        Solution2089 solution2089 = new Solution2089();
    }
}