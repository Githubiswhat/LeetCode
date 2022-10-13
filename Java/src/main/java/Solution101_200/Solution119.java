package Solution101_200;

import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

/**
 * @author windows
 */
public class Solution119 {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> list = Stream.of(1).collect(Collectors.toList());
        if (rowIndex == 0){
            return list;
        }
        List<Integer> list1 = Stream.of(1, 1).collect(Collectors.toList());
        if (rowIndex == 1){
            return list1;
        }
        List<Integer> tempList;
        for (int i = 2; i <= rowIndex; i++) {
            tempList = Stream.of(1, 1).collect(Collectors.toList());
            for (int j = 1; j < i; j++) {
                tempList.add(j, list1.get(j) + list1.get(j - 1));
            }
            list1 = tempList;
        }
        return list1;
    }


    public static void main(String[] args) {
        Solution119 solution119 = new Solution119();
    }
}