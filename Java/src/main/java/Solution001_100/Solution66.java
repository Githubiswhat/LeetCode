package Solution001_100;

import java.util.ArrayList;

/**
 * @author windows
 */
public class Solution66 {
    public int[] plusOne(int[] digits) {
        ArrayList<Integer> list = new ArrayList<>();
        int carry = 1;
        for (int i = digits.length - 1; i >= 0 ; i--) {
            int sum = digits[i] + carry;
            carry = sum / 10;
            list.add(sum % 10);
        }
        if (carry == 1){
            list.add(carry);
        }
        int[] res = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            res[i] = list.get(list.size() - i - 1);
        }
        return res;
    }



}
