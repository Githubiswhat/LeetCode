package Solution1001_1100;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution1018 {

    public List<Boolean> prefixesDivBy5(int[] nums) {
        int sum = 0;
        ArrayList<Boolean> res = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            sum = sum * 2 + nums[i];
            if (sum % 5 == 0) {
                res.add(true);
            } else {
                res.add(false);
            }
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1018 solution1018 = new Solution1018();
        System.out.println(solution1018.prefixesDivBy5(new int[]{1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1}));
    }
}