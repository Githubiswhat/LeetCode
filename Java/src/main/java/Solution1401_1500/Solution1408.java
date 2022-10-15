package Solution1401_1500;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;

/**
 * @author windows
 */
public class Solution1408 {
    public List<String> stringMatching(String[] words) {
        Arrays.sort(words, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                return o1.length() - o2.length();
            }
        });
        ArrayList<String> list = new ArrayList<>();
        for (int i = 0; i < words.length; i++) {
            for (int j = i + 1; j < words.length; j++) {
                if (words[j].indexOf(words[i]) != -1){
                    list.add(words[i]);
                }
            }
        }
        return list;
    }
    
    
    public static void main(String[] args) {
        Solution1408 solution1408 = new Solution1408();
    }
}