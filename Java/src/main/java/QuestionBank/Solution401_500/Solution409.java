package QuestionBank.Solution401_500;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution409 {
    public int longestPalindrome(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            map.put(s.charAt(i), map.getOrDefault(s.charAt(i), 0) + 1);
        }
        int sum = 0;
        boolean flag = false;
        for (Map.Entry<Character, Integer> entry : map.entrySet()) {
            if (entry.getValue() % 2 == 0){
                sum += entry.getValue();
            }else{
                sum += entry.getValue() - 1;
                flag = true;
            }
        }
        return flag ? sum + 1: sum;
    }


    public static void main(String[] args) {
        Solution409 solution409 = new Solution409();
    }
}