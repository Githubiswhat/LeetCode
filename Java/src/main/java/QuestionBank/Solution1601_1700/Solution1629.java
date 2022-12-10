package QuestionBank.Solution1601_1700;

import java.util.HashMap;
import java.util.Map;
import java.util.Objects;

/**
 * @author windows
 */
public class Solution1629 {
    public char slowestKey(int[] releaseTimes, String keysPressed) {
        HashMap<Character, Long> map = new HashMap<>();
        map.put(keysPressed.charAt(0), (long) releaseTimes[0]);
        for (int i = 1; i < keysPressed.length(); i++) {
            map.put(keysPressed.charAt(i), map.getOrDefault(keysPressed.charAt(i), 0L) + releaseTimes[i] - releaseTimes[i - 1]);
        }
        Long max = 0L;
        for (Map.Entry<Character, Long> entry: map.entrySet()) {
            max = Math.max(max, entry.getValue());
        }
        char maxChar = 'a';
        for (Map.Entry<Character, Long> entry: map.entrySet()) {
           if (Objects.equals(entry.getValue(), max) && entry.getKey() > maxChar) {
                maxChar = entry.getKey();
           }
        }
        return maxChar;
    }
    
    
    public static void main(String[] args) {
        Solution1629 solution1629 = new Solution1629();
    }
}