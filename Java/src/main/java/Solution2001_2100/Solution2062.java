package Solution2001_2100;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution2062 {
    public int countVowelSubstrings(String word) {
        HashSet<Character> set = new HashSet<Character>(){{
            add('a');
            add('e');
            add('i');
            add('o');
            add('u');
        }};
        int left = 0;
        int right = left + 5;
        int count = 0;
        while (right < word.length()) {
            boolean flag = false;
            for (int j = left; j < right; j++) {
                if (!set.contains(word.charAt(j))) {
                    left = j + 1;
                    right = left + 5;
                    flag = true;
                    break;
                }
            }
            if (!flag){
                count++;
                while(right < word.length() && set.contains(word.charAt(right))){
                    count++;
                    right++;
                }
                left = right;
                right = left + 5;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution2062 solution2062 = new Solution2062();
        System.out.println(solution2062.countVowelSubstrings("cuaieuouac"));
    }
}