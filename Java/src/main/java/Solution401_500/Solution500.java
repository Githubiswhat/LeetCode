package Solution401_500;

import java.util.ArrayList;
import java.util.regex.Pattern;

/**
 * @author windows
 */
public class Solution500 {
    public String[] findWords(String[] words) {
        String[] keyboards = {"^[qwertyuiop]+$", "^[asdfghjkl]+$", "^[zxcvbnm]+$"};
        ArrayList<String> list = new ArrayList<>();
        for (int i = 0; i < words.length; i++) {
            for (int j = 0; j < keyboards.length; j++) {
                boolean find = Pattern.compile(keyboards[j], Pattern.CASE_INSENSITIVE).matcher(words[i]).find();
                if (find) {
                    list.add(words[i]);
                    break;
                }
            }
        }
        return list.toArray(new String[list.size()]);
    }



    public static void main(String[] args) {
        Solution500 solution500 = new Solution500();
    }
}