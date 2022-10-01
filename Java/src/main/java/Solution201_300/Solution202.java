package Solution201_300;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution202 {
    public static void main(String[] args) {
        Solution202 solution202 = new Solution202();
        boolean happy = solution202.isHappy(19);
        System.out.println(happy);
    }

    public boolean isHappy(int n) {
        HashSet<Integer> set = new HashSet<>();
        while (!set.contains(n) && n != 1) {
            set.add(n);
            int temp = n;
            int sum = 0;
            while (temp != 0) {
                sum += Math.pow(temp % 10, 2);
                temp /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
}