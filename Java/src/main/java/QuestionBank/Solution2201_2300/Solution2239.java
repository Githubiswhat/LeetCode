package QuestionBank.Solution2201_2300;
/**
 * @author windows
 */
public class Solution2239 {

    public int findClosestNumber(int[] nums) {
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length; i++) {
            if (Math.abs(nums[i] - 0) < Math.abs(min)){
                min = nums[i];
            }else if (Math.abs(nums[i] - 0) == Math.abs(min) && nums[i] > min){
                min = nums[i];
            }
        }
        return min;
    }
    
    
    public static void main(String[] args) {
        Solution2239 solution2239 = new Solution2239();
        System.out.println(solution2239.findClosestNumber(new int[]{-4,-2,1,4,8}));
    }
}