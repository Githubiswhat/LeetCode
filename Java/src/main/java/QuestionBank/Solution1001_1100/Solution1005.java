package QuestionBank.Solution1001_1100;

import java.util.ArrayList;
import java.util.Collections;

/**
 * @author windows
 */
public class Solution1005 {
    public int largestSumAfterKNegations(int[] nums, int k) {
        ArrayList<Integer> list = new ArrayList<>();
        int min = Integer.MAX_VALUE;
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            if(nums[i] < 0){
                list.add(nums[i]);
            }
            min = Math.min(min, Math.abs(nums[i]));
            sum += nums[i];
        }
        Collections.sort(list);
        if (k <= list.size()){
            for (int i = 0; i < k; i++) {
                sum += 2 * Math.abs(list.get(i));
            }
        }else{
            for (int i = 0; i < list.size(); i++) {
                sum += 2 * Math.abs(list.get(i));
            }
            boolean flag = (k - list.size()) % 2 == 0;
            if (!flag){
                sum -= min * 2;
            }
        }
        return sum;
    }
    
    
    public static void main(String[] args) {
        Solution1005 solution1005 = new Solution1005();
        System.out.println(solution1005.largestSumAfterKNegations(new int[]{3, -1, 0 ,2}, 3));
    }
}