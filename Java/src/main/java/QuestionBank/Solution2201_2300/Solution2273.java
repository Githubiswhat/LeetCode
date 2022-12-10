package QuestionBank.Solution2201_2300;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * @author windows
 */
public class Solution2273 {
    public List<String> removeAnagrams(String[] words) {
        ArrayList<String> list = new ArrayList<>();
        list.add(words[0]);
        for (int i = 1; i < words.length; i++) {
            if (words[i].length() != words[i - 1].length()){
                list.add(words[i]);
            }else{
                char[] chars = words[i].toCharArray();
                char[] chars1 = words[i - 1].toCharArray();
                Arrays.sort(chars);
                Arrays.sort(chars1);
                boolean found = false;
                for (int j = 0; j < chars.length; j++) {
                    if (chars[j] != chars1[j]) {
                        found = true;
                        break;
                    }
                }
                if (found) {
                    list.add(words[i]);
                }
            }
        }
        return list;
    }
    
    
    public static void main(String[] args) {
        Solution2273 solution2273 = new Solution2273();
        System.out.println(solution2273.removeAnagrams(new String[]{"abba", "baba", "bbaa", "cd", "cd"}));
    }
}