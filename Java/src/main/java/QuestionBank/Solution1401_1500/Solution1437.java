package QuestionBank.Solution1401_1500;

/**
 * @author windows
 */
public class Solution1437 {
    public boolean kLengthApart(int[] nums, int k) {
        int num = -1;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1){
                if (num != -1 && i - num <= k){
                    return false;
                }else{
                    num = i;
                }
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution1437 solution1437 = new Solution1437();
        System.out.println(solution1437.kLengthApart(new int[]{1, 0, 0, 1, 0, 1}, 2));
    }
}