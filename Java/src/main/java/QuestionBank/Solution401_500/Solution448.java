package QuestionBank.Solution401_500;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution448 {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != i + 1){
                int temp = nums[nums[i] - 1];
                nums[nums[i] - 1] = nums[i];
                nums[i] = temp;
                if (nums[i] != nums[nums[i] - 1]){
                    i--;
                }
            }
        }
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != i + 1){
                list.add(i + 1);
            }
        }
        return list;
    }


    public static void main(String[] args) {
        Solution448 solution448 = new Solution448();
        System.out.println(solution448.findDisappearedNumbers(new int[]{1, 1}));
    }
}