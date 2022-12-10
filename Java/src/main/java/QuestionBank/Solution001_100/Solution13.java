package QuestionBank.Solution001_100;

import java.util.HashMap;

/**
 * @author windows
 */
public class Solution13 {

    public int romanToInt(String s) {
        HashMap<Character, Integer> map = new HashMap<Character, Integer>(){{
            put('I', 1);
            put('V', 5);
            put('X', 10);
            put('L', 50);
            put('C', 100);
            put('D', 500);
            put('M', 1000);
        }};
        int sum = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            sum += map.get(s.charAt(i));
            if (map.get(s.charAt(i)) < map.get(s.charAt(i + 1))){
                sum -= 2 * map.get(s.charAt(i));
            }
        }
        sum += map.get(s.charAt(s.length() - 1));
        return sum;
    }

    public static void main(String[] args) {
        Solution13 solution13 = new Solution13();
    }
}