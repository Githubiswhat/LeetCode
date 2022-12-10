package QuestionBank.Solution001_100;

import java.util.ArrayList;
import java.util.Arrays;

/**
 * @author windows
 */
public class Solution56 {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (o1, o2) -> {
            if (o1[1] == o2[1]){
                return o1[0] - o2[0];
            }
            return o1[1] - o2[1];
        });
        ArrayList<int[]> list = new ArrayList<>();
        list.add(new int[]{intervals[0][0], intervals[0][1]});
        for (int i = 1; i < intervals.length; i++) {
            if (intervals[i][0] <= intervals[i - 1][1] && intervals[i][0] >= intervals[i - 1][0]){
                list.remove(list.size() - 1);
                list.add(new int[] { intervals[i - 1][0], intervals[i][1]});
            }else if(intervals[i][1] >= intervals[i - 1][1] && intervals[i][0] <= intervals[i - 1][0]){
                list.remove(list.size() - 1);
                list.add(new int[] { intervals[i][0], intervals[i][1]});
            }else{
                list.add(new int[] { intervals[i][0], intervals[i][1]});
            }
        }
        int[][] res = new int[list.size()][2];
        for (int i = 0; i < list.size(); i++) {
            res[i] = list.get(i);
        }
        return res;
    }


    public static void main(String[] args) {
        Solution56 solution56 = new Solution56();
    }
}