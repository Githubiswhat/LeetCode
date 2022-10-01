package Solution201_300;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution228 {


    public List<String> summaryRanges(int[] nums) {
        List<String> list = new ArrayList<String>();
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (i + 1 != nums.length && nums[i+1] == nums[i] + 1){
                count++;
            }else{
                if (count >= 1){
                    int start = nums[i] - count;
                    String str = start + "->" + nums[i];
                    list.add(str);
                }else{
                    list.add(nums[i] + "");
                }
                count = 0;
            }
        }
        return list;
    }


    public static void main(String[] args) {
        Solution228 solution228 = new Solution228();
        System.out.println(solution228.summaryRanges(new int[]{0, 1, 2, 4, 5, 7}));
    }
}