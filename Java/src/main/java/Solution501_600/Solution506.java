package Solution501_600;

import java.util.Arrays;
import java.util.HashMap;
import java.util.stream.Collectors;

/**
 * @author windows
 */
public class Solution506 {
    public String[] findRelativeRanks(int[] score) {
        int[] arr = new int[score.length];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = score[i];
        }
        Arrays.sort(arr);
        int len = score.length;
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < len; i++) {
            map.put(arr[i], len - i);
        }
        String[] strings = new String[score.length];
        for (int i = 0; i < len; i++) {
            if (map.get(score[i]) == 1) {
                strings[i] = "Gold Medal";
            }else if (map.get(score[i]) == 2){
                strings[i] = "Silver Medal";
            }else if(map.get(score[i]) == 3){
                strings[i] = "Bronze Medal";
            }else{
                strings[i] = String.valueOf(map.get(score[i]));
            }
        }
        return strings;
    }


    public static void main(String[] args) {
        Solution506 solution506 = new Solution506();
        System.out.println(Arrays.toString(solution506.findRelativeRanks(new int[]{5, 4, 3, 2, 1})));
    }
}