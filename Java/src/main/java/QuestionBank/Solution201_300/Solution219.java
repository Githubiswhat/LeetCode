package QuestionBank.Solution201_300;

import java.util.HashMap;

/**
 * @author windows
 */
public class Solution219 {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>((int) (nums.length / 0.75 + 1));
        for (int i = 0; i < nums.length; i++) {
            if (!map.containsKey(nums[i])) {
                map.put(nums[i], i);
            }else{
                int index = map.get(nums[i]);
                if (Math.abs(index - i) <= k){
                    return true;
                }else{
                    map.put(nums[i], i);
                }
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Solution219 solution219 = new Solution219();
    }
}