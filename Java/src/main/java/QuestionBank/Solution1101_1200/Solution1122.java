package QuestionBank.Solution1101_1200;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;

/**
 * @author windows
 */
public class Solution1122 {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        HashSet<Integer> set = new HashSet<>();
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < arr2.length; i++) {
            set.add(arr2[i]);
            list.add(arr2[i]);
        }
        ArrayList<Integer> arr3 = new ArrayList<>();
        int index = 0;
        for (int i = 0; i < arr1.length; i++) {
            if (!set.contains(arr1[i])){
                arr3.add(arr1[i]);
            }else{
                for (int j = 0; j < list.size(); j++) {
                    if (list.get(j) == arr1[i]){
                        list.add(j, arr1[i]);
                        break;
                    }
                }
            }
        }
        Collections.sort(arr3);
        for (int i = 0; i < arr3.size(); i++) {
            list.add(arr3.get(i));
        }
        for (int i = 0; i < arr2.length; i++) {
            for (int j = 0; j < list.size(); j++) {
                if (list.get(j) == arr2[i]){
                    list.remove(j);
                    break;
                }
            }
        }
        return Arrays.stream(list.toArray(new Integer[list.size()])).mapToInt(Integer::intValue).toArray();
    }
    
    
    public static void main(String[] args) {
        Solution1122 solution1122 = new Solution1122();
        System.out.println(Arrays.toString(solution1122.relativeSortArray(new int[]{2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19}, new int[]{2, 1, 4, 3, 9, 6})));
    }
}