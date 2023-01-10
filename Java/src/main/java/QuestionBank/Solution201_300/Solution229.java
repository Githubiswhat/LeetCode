package QuestionBank.Solution201_300;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * @author windows
 */
public class Solution229 {
    public List<Integer> majorityElement(int[] nums) {
        int element1 = 0;
        int element2 = 0;
        int vote1 = 0;
        int vote2 = 0;
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            if (nums[i] == element1 && vote1 > 0) {
                vote1++;
            }else if (nums[i] == element2 && vote2 > 0) {
                vote2++;
            }else if (vote1 == 0){
                vote1++;
                element1 = nums[i];
            }else if (vote2 == 0){
                vote2++;
                element2 = nums[i];
            }else{
                vote1--;
                vote2--;
            }
        }
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < n; i++) {
            if (vote1 > 0 && nums[i] == element1) {
                count1++;
            }else if (vote2 > 0 && nums[i] == element2){
                count2++;
            }
        }
        ArrayList<Integer> res = new ArrayList<>();
        if (vote1 > 0 && count1 > n / 3) {
            res.add(element1);
        }
        if (vote2 > 0 && count2 > n / 3){
            res.add(element2);
        }
        return res;
    }


    public static void main(String[] args) {
        Solution229 solution229 = new Solution229();
        System.out.println(Arrays.toString(solution229.majorityElement(new int[]{3, 2, 3}).toArray()));
    }
}