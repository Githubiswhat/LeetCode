package QuestionBank.Solution2901_3000;
/**
 * @author windows
 */
public class Solution2908 {

    public int minimumSum(int[] nums) {
        int n = nums.length;
        int res = Integer.MAX_VALUE;
        for (int j = 0; j < n - 1; j++) {
            for (int i = 0; i < j; i++) {
                if (nums[j] > nums[i]) {
                    for (int k = j + 1; k < n; k++) {
                        if (nums[j] > nums[k]){
                            res = Math.min(res,nums[i] + nums[j] + nums[k]);
                        }
;                    }
                }
            }
        }
        return res == Integer.MAX_VALUE ? -1 : res;
    }
    
    
    public static void main(String[] args) {
        Solution2908 solution2908 = new Solution2908();
    }
}