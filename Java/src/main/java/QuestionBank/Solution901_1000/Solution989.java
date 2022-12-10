package QuestionBank.Solution901_1000;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution989 {
    public List<Integer> addToArrayForm(int[] num, int k) {
        int n = num.length - 1;
        int carry = 0;
        ArrayList<Integer> list = new ArrayList<>();
        while(n >= 0 || k > 0){
            int a = n >= 0 ? num[n--] : 0;
            int b = k > 0 ? k % 10 : 0;
            k /= 10;
            int sum = a + b + carry;
            carry = sum / 10;
            list.add(sum % 10);
        }
        if (carry > 0){
            list.add(carry);
        }
        for (int i = 0; i < list.size() / 2; i++) {
            int temp = list.get(i);
            list.set(i, list.get(list.size() - 1 - i));
            list.set(list.size() - 1 -i, temp);
        }
        return list;
    }


    public static void main(String[] args) {
        Solution989 solution989 = new Solution989();
    }
}