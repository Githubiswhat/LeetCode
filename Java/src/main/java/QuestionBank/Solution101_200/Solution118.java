package QuestionBank.Solution101_200;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Stream;

import static java.util.stream.Collectors.toList;

/**
 * @author windows
 */
public class Solution118 {
    public List<List<Integer>> generate(int numRows) {
        ArrayList<List<Integer>> lists = new ArrayList<>();
        lists.add(Stream.of(1).collect(toList()));
        if (numRows == 1){
            return lists;
        }
        lists.add(Stream.of(1, 1).collect(toList()));
        for (int i = 2; i < numRows; i++) {
            List<Integer> list = Stream.of(1).collect(toList());
            for (int j = 1; j < i; j++) {
                list.add(lists.get(i - 1).get(j) + lists.get(i - 1).get(j - 1));
            }
            list.add(1);
            lists.add(list);
        }
        return lists;
    }


    public static void main(String[] args) {
        Solution118 solution118 = new Solution118();
        List<List<Integer>> generate = solution118.generate(3);
        System.out.println(generate.toString());
    }
}