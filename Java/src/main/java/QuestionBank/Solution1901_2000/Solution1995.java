package QuestionBank.Solution1901_2000;

import java.util.HashMap;

/**
 * @author windows
 */
public class Solution1995 {
    public int countQuadruplets(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], i);
        }
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                for (int k = j + 1; k < nums.length; k++) {
                    int sum = nums[i] + nums[j] + nums[k];
                    if (map.containsKey(sum) && map.get(sum) > k){
                        count++;
                    }
                }
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution1995 solution1995 = new Solution1995();
    }
}