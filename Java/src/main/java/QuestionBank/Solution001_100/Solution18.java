package QuestionBank.Solution001_100;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

/**
 * @author windows
 */
public class Solution18 {

    public List<List<Integer>> fourSum(int[] nums, int target) {
        Arrays.sort(nums);
        ArrayList<List<Integer>> lists = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            if (i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            for (int j = i + 1; j < nums.length; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]){
                    continue;
                }
                long sum = nums[i] + nums[j];
                int left = j + 1;
                int right = nums.length - 1;
                while(left < right){
                    if (nums[left] + nums[right] + sum < target){
                        left++;
                    }else if (nums[left] + nums[right] + sum > target){
                        right--;
                    }else{
                        lists.add(Stream.of(nums[i], nums[j], nums[left], nums[right]).collect(Collectors.toList()));
                        left++;
                        while (left < right && nums[left] == nums[left - 1]){
                            left++;
                        }
                        right--;
                        while (right > left && nums[right] == nums[right + 1]){
                            right--;
                        }
                    }
                }
            }
        }
        return lists;
    }


    public static void main(String[] args) {
        Solution18 solution18 = new Solution18();
        System.out.println(solution18.fourSum(new int[]{-2,-1,-1,1,1,2,2}, 0));
    }
}