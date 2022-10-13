package Solution1801_1900;

import java.util.HashMap;
import java.util.HashSet;

/**
 * @author windows
 */
public class Solution1805 {
    public int numDifferentIntegers(String word) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < word.length(); i++) {
            if (!Character.isDigit(word.charAt(i))){
                sb.append(" ");
            }else{
                sb.append(word.charAt(i));
            }
        }
        String[] split = sb.toString().split("[ ]+");
        HashSet<String> set = new HashSet<>();
        for (int i = 0; i < split.length; i++) {
            if (split[i] == ""){
                continue;
            }
            while(split[i].charAt(0) == '0' && split[i].length() > 1){
                split[i] = split[i].substring(1);
            }
            set.add(split[i]);
        }
        return set.size();
    }
    
    
    public static void main(String[] args) {
        Solution1805 solution1805 = new Solution1805();
        System.out.println(solution1805.numDifferentIntegers("a123bc34d8ef34"));
    }
}