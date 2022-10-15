package Solution1301_1400;    
/**
 * @author windows
 */
public class Solution1351 {
    public int countNegatives(int[][] grid) {
        int i = 0;
        int j = grid[0].length - 1;
        int sum = 0;
        while (i < grid.length && j >= 0){
            while(j >= 0 && grid[i][j] < 0){
                sum += grid.length - i;
                j--;
            }
            while(i < grid.length && j >= 0 && grid[i][j] >= 0){
                i++;
            }
        }
        return sum;
    }
    
    
    public static void main(String[] args) {
        Solution1351 solution1351 = new Solution1351();
        System.out.println(solution1351.countNegatives(new int[][]{ {4, 3, 2, -1},
                                                                    {3, 2, 1, -1},
                                                                    {1, 1, -1, -2},
                                                                    {-1, -1, -2, -3}}));
    }
}