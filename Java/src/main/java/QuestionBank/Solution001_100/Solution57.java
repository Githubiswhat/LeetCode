package QuestionBank.Solution001_100;

import java.util.ArrayList;
import java.util.Arrays;

/**
 * @author windows
 */
public class Solution57 {

    public int[][] insert(int[][] intervals, int[] newInterval) {
        int[][] intervalsTemp = new int[intervals.length + 1][2];
        intervalsTemp[intervals.length] = newInterval;
        for (int i = 0; i < intervals.length; i++) {
            intervalsTemp[i] = intervals[i];
        }
        intervals = intervalsTemp;
        Arrays.sort(intervals, (o1, o2) -> {
            if (o1[0] == o2[0]){
                return o1[1] - o2[1];
            }
            return o1[0] - o2[0];
        });

        ArrayList<int[]> list = new ArrayList<>();
        list.add(new int[]{intervals[0][0], intervals[0][1]});
        for (int i = 1; i < intervals.length; i++) {
            int[] lastList = list.get(list.size() - 1);
            if (intervals[i][0] >= lastList[0] && intervals[i][0] <= lastList[1]){
                if (intervals[i][1] <= lastList[1]){
                    continue;
                }else {
                    list.remove(list.size() - 1);
                    list.add(new int[] { lastList[0], intervals[i][1]});
                }
            }else {
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
        Solution57 solution57 = new Solution57();
    }
}