import java.util.HashMap;
import java.util.HashSet;

public class Solution3 {
    public int lengthOfLongestSubstring(String s) {
        int left = 0, max = 0;
        HashSet<Character> hashSet = new HashSet<>();
        for (int i = 0; i < s.length(); i++) {
           if (hashSet.contains(s.charAt(i))){
               for (int j = left; j < i; j++) {
                   if (s.charAt(j) == s.charAt(i)) {
                       left = j + 1;
                       break;
                   }
                   hashSet.remove(s.charAt(j));
               }
           }else {
               hashSet.add(s.charAt(i));
               if (i - left + 1 > max){
                   max = i - left + 1;
               }
           }
        }
        return max;
    }

    public static void main(String[] args) {
        Solution3 solution3 = new Solution3();
        int abcabcabcabc = solution3.lengthOfLongestSubstring("pwwkew");
        System.out.println(abcabcabcabc);
    }
}
