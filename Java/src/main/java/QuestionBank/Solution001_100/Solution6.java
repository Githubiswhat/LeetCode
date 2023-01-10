package QuestionBank.Solution001_100;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution6 {
    public String convert(String s, int numRows) {
        if (numRows == 1){
            return s;
        }
        ArrayList<List<Character>> lists = new ArrayList<>();
        for (int i = 0; i < numRows; i++) {
            lists.add(new ArrayList<Character>());
        }
        int num = 0;
        int a = 1;
        for (int i = 0; i < s.length(); i++) {
            lists.get(num).add(s.charAt(i));
            num += a;
            if(num == numRows - 1) {
                a = -a;
            }else if (num == 0){
                a = -a;
            }
        }
        StringBuilder res = new StringBuilder();
        for (int i = 0; i < lists.size(); i++) {
            List<Character> list = lists.get(i);
            for (int j = 0; j < list.size(); j++) {
                res.append(list.get(j));
            }
        }
        return res.toString();
    }

    public static void main(String[] args) {
        Solution6 solution6 = new Solution6();
        System.out.println(solution6.convert("PAYPALISHIRING", 3));
    }

}
