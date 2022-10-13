package Solution701_800;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution748 {
    public String shortestCompletingWord(String licensePlate, String[] words) {
        HashMap<Character, Integer> map = new HashMap<>();
        for (int i = 0; i < licensePlate.length(); i++) {
            if (Character.isLetter(licensePlate.charAt(i))){
                char ch = Character.toLowerCase(licensePlate.charAt(i));
                map.put(ch, map.getOrDefault(ch, 0) + 1);
            }
        }
        int length = Integer.MAX_VALUE;
        String res  = "";
        for (int i = 0; i < words.length; i++) {
            HashMap<Character, Integer> wordMap = new HashMap<>();
            for (int j = 0; j < words[i].length(); j++) {
                char ch = words[i].charAt(j);
                wordMap.put(ch, wordMap.getOrDefault(ch, 0) + 1);
            }
            boolean flag = true;
            for (Map.Entry entry: map.entrySet()) {
                if (!wordMap.containsKey(entry.getKey()) || wordMap.get(entry.getKey()) < (int)entry.getValue()){
                    flag = false;
                    break;
                }
            }
            if (flag){
                if (words[i].length() < length){
                    length = words[i].length();
                    res = words[i];
                }
            }
        }
        return res;
    }


    public static void main(String[] args) {
        Solution748 solution748 = new Solution748();
        System.out.println(solution748.shortestCompletingWord("1s3 PSt", new String[]{"step", "steps", "stripe", "stepple"}));
    }
}