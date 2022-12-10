package QuestionBank.Solution801_900;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

/**
 * @author windows
 */
public class Solution830 {
    public List<List<Integer>> largeGroupPositions(String s) {
        int count = 1;
        ArrayList<List<Integer>> res = new ArrayList<>();
        for (int i = 0; i < s.length() - 1; i++) {
            if (s.charAt(i) == s.charAt(i + 1)){
                count++;
            }else{
                if(count >= 3){
                    res.add(Stream.of(i - count + 1, i).collect(Collectors.toList()));
                }
                count = 1;
            }
        }
        if (count >= 3){
            res.add(Stream.of(s.length() - count, s.length() - 1).collect(Collectors.toList()));
        }
        return res;
    }


    public static void main(String[] args) {
        Solution830 solution830 = new Solution830();
    }
}