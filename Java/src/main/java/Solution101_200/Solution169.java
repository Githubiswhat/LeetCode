package Solution101_200;

/**
 * @author windows
 */
public class Solution169 {
    public int majorityElement(int[] nums) {
        int count = 1;
        int people = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == people){
                count++;
            }else{
                count--;
                if (count == 0){
                    people = nums[i];
                    count = 1;
                }
            }
        }
        return people;
    }


    public static void main(String[] args) {
        Solution169 solution169 = new Solution169();
    }
}