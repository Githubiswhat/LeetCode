package QuestionBank.Solution801_900;

import java.util.ArrayList;

/**
 * @author windows
 */
public class Solution844 {
    public boolean backspaceCompare(String s, String t) {
        ArrayList<Character> list1 = getBackSpaceString(s);
        ArrayList<Character> list2 = getBackSpaceString(t);
        return list2.toString().equals(list1.toString());
    }

    private ArrayList<Character> getBackSpaceString(String s) {
        ArrayList<Character> list = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '#'){
                if(list.size() > 0){
                    list.remove(list.size() - 1);
                }
            }else{
                list.add(s.charAt(i));
            }
        }
        return list;
    }



    public static void main(String[] args) {
        Solution844 solution844 = new Solution844();
        System.out.println(solution844.backspaceCompare("a#c", "b"));
    }
}