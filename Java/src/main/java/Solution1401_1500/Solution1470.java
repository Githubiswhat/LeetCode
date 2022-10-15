package Solution1401_1500;    
/**
 * @author windows
 */
public class Solution1470 {
    public int[] shuffle(int[] nums, int n) {
        int[] res = new int[nums.length];
        int index = 0;
        for (int i = 0; i < n; i++) {
            res[index++] = nums[i];
            res[index++] = nums[i + n];
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1470 solution1470 = new Solution1470();
    }
}