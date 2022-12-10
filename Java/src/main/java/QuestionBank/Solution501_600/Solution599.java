package QuestionBank.Solution501_600;

import java.util.ArrayList;
import java.util.HashMap;

/**
 * @author windows
 */
public class Solution599 {

    public String[] findRestaurant(String[] list1, String[] list2) {
        HashMap<String, Integer> map = new HashMap<>();
        ArrayList<String> strings = new ArrayList<>();
        int minIndex = list1.length + list2.length;
        for (int i = 0; i < list1.length; i++) {
            map.put(list1[i], i);
        }
        for (int i = 0; i < list2.length; i++) {
            if (map.containsKey(list2[i])){
                if (map.get(list2[i]) + i == minIndex) {
                    strings.add(list2[i]);
                }else if (map.get(list2[i]) + i < minIndex) {
                    minIndex = map.get(list2[i]) + i;
                    strings.clear();
                    strings.add(list2[i]);
                }
            }
        }
        return strings.toArray(new String[strings.size()]);
    }


    public static void main(String[] args) {
        Solution599 solution599 = new Solution599();
    }
}