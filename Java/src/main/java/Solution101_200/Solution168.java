package Solution101_200;

/**
 * @author windows
 */
public class Solution168 {
    public String convertToTitle(int columnNumber) {
        StringBuilder sb = new StringBuilder();
        while(columnNumber > 26){
            int a = columnNumber % 26;
            if (a == 0){
                a = 26;
                columnNumber -= 26;
            }
            sb.append((char)(a + 'A' - 1));
            columnNumber /= 26;
        }
        sb.append((char)(columnNumber + 'A' - 1));
        return sb.reverse().toString();
    }


    public static void main(String[] args) {
        Solution168 solution168 = new Solution168();
        System.out.println(solution168.convertToTitle(52));
    }
}