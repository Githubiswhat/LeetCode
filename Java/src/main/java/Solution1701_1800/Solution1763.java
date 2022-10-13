package Solution1701_1800;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution1763 {
    public String longestNiceSubstring(String s) {
        HashSet<Character> set = new HashSet<>();
        for (int i = 0; i < s.length(); i++) {
            set.add(s.charAt(i));
        }
        int left = 0;
        int right = 0;
        int len = 0;
        String res = "";
        while(right < s.length()){
            char upper = (char) (s.charAt(right) + 32);
            char lower = (char) (s.charAt(right) - 32);
            if (!set.contains(upper) && !set.contains(lower)) {
                left = right + 1;
                right = left;
            }else{
                right++;
                String str = s.substring(left, right);
                if (str.length() > 1){
                    HashSet<Character> strSet = new HashSet<>();
                    for (int i = 0; i < str.length(); i++) {
                        strSet.add(str.charAt(i));
                    }
                    boolean flag = true;
                    for (int i = 0; i < str.length(); i++) {
                        if (!strSet.contains((char) (str.charAt(i) + 32)) && !strSet.contains((char) (str.charAt(i) - 32))){
                            flag = false;
                            break;
                        }
                    }
                    if(flag && right -left > len){
                        len = right - left;
                        res = str;
                    }
                }
            }
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution1763 solution1763 = new Solution1763();
        System.out.println(solution1763.longestNiceSubstring("HkhBubUYy"));
    }

}