package QuestionBank.Solution2201_2300;
/**
 * @author windows
 */
public class Solution2293 {
    public int minMaxGame(int[] nums) {
        while (nums.length != 1){
            int len = nums.length;
            int[] arr = new int[len / 2];
            for (int i = 0; i < arr.length; i++) {
                if(i % 2 == 0){
                    arr[i] = Math.min(nums[2 * i], nums[2 * i + 1]);
                }else{
                    arr[i] = Math.max(nums[2 * i], nums[2 * i + 1]);
                }
            }
            nums = arr;
        }
        return nums[0];
    }


    public static void main(String[] args) {
        Solution2293 solution2293 = new Solution2293();
    }
}