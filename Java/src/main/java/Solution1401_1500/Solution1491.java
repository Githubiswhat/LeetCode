package Solution1401_1500;    
/**
 * @author windows
 */
public class Solution1491 {
    public double average(int[] salary) {
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        double sum = 0;
        for (int i = 0; i < salary.length; i++) {
            sum += salary[i];
            min = Math.min(min, salary[i]);
            max = Math.max(max, salary[i]);
        }
        return (sum - max - min) / (salary.length - 2);
    }
    
    
    public static void main(String[] args) {
        Solution1491 solution1491 = new Solution1491();
        System.out.println(solution1491.average(new int[]{4000, 3000, 1000, 2000}));
    }
}