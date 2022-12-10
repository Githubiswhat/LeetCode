package QuestionBank.Solution1101_1200;

/**
 * @author windows
 */
public class Solution1154 {
    public static void main(String[] args) {
        Solution1154 solution1154 = new Solution1154();
        System.out.println(solution1154.dayOfYear("2019-02-10"));
    }

    public int dayOfYear(String date) {
        String[] split = date.split("-");
        int[] days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int year = Integer.parseInt(split[0]);
        int mouth = Integer.parseInt(split[1]);
        int day = Integer.parseInt(split[2]);
        int sum = 0;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
            days[1] = 29;
        }
        for (int i = 1; i < mouth; i++) {
            sum += days[i - 1];
        }
        sum += day;
        return sum;
    }
}