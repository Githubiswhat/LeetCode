package QuestionBank.Solution1701_1800;

import java.util.List;

/**
 * @author windows
 */
public class Solution1773 {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int index = 0;
        if ("color".equals(ruleKey)){
            index = 1;
        }else if ("name".equals(ruleKey)){
            index = 2;
        }
        int count = 0;
        for (int i = 0; i < items.size(); i++) {
            if (items.get(i).get(index).equals(ruleValue)){
                count++;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution1773 solution1773 = new Solution1773();
    }
}