package Solution901_1000;

/**
 * @author windows
 */
public class Solution997 {
    public int findJudge(int n, int[][] trust) {
        int[] nums = new int[n];
        for (int i = 0; i < trust.length; i++) {
            nums[trust[i][0] - 1] += n;
            nums[trust[i][1] - 1]++;
        }
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == n - 1){
                return i + 1;
            }
        }
        return -1;
    }


    public static void main(String[] args) {
        Solution997 solution997 = new Solution997();
    }
}