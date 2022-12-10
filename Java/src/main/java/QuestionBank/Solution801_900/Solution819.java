package QuestionBank.Solution801_900;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;

/**
 * @author windows
 */
public class Solution819 {

    public String mostCommonWord(String paragraph, String[] banned) {
        HashSet<String> set = new HashSet<>();
        Map<String, Integer> map = new HashMap<>();
        String str = paragraph.toLowerCase() + '#';
        for (int i = 0; i < banned.length; i++) {
            set.add(banned[i].toLowerCase());
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < str.length(); i++) {
            if (Character.isLetter(str.charAt(i))) {
                sb.append(str.charAt(i));
            }else{
                if (sb.length() > 0){
                    String temp = sb.toString();
                    if (!set.contains(temp)){
                        map.put(temp, map.getOrDefault(temp, 0) + 1);
                    }
                }
                sb.delete(0, sb.length());
            }
        }
        int max = 0;
        String res = "";
        for (Map.Entry<String, Integer> entry : map.entrySet()){
            if (entry.getValue() > max) {
                max = entry.getValue();
                res = entry.getKey();
            }
        }
        return res;
    }


    public static void main(String[] args) {
        Solution819 solution819 = new Solution819();
        System.out.println(solution819.mostCommonWord("Bob hit a ball, the hit BALL flew far after it was hit.", new String[]{"hit"}));
    }
}