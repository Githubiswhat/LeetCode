package WeeklyCompetition.Weekly301_400.Weekly322;

/**
 * @author windows
 */
public class Solution2492 {
    public int minScore(int n, int[][] roads) {
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < roads.length; i++) {
            min = Math.min(min, roads[i][2]);
        }
        return min;
    }

}
