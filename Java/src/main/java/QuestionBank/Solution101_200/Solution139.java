package QuestionBank.Solution101_200;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

/**
 * @author windows
 */
public class Solution139 {
    public boolean wordBreak(String s, List<String> wordDict) {
        HashSet<String> set = new HashSet<>(wordDict);
        boolean[] df = new boolean[s.length() + 1];
        df[0] = true;
        for (int i = 1; i <= s.length(); i++) {
            for (int j = 0; j < i; j++) {
                if (df[j] && set.contains(s.substring(j, i))){
                    if (set.contains(s.substring(i + 1, s.length()))){
                        return true;
                    }
                    df[i] = true;
                    break;
                }
            }
        }
        return df[s.length()];
    }


    public static void main(String[] args) {
        Solution139 solution139 = new Solution139();
        ArrayList<String> wordDict = new ArrayList<>();
        wordDict.add("apple");
        wordDict.add("pen");
        System.out.println(solution139.wordBreak("applepenapple", wordDict));
    }
}