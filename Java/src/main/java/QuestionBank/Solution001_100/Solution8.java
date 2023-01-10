package QuestionBank.Solution001_100;

import javax.xml.stream.events.Characters;

/**
 * @author windows
 */
public class Solution8 {
    public int myAtoi(String s) {
        s = s.trim();
        if (s.length() == 0){
            return 0;
        }
        if (!Character.isDigit(s.charAt(0)) && s.charAt(0) != '+' && s.charAt(0) != '-'){
            return 0;
        }
        boolean minus = s.charAt(0) == '-' ? true : false;
        long number = 0;
        int i = !Character.isDigit(s.charAt(0)) ? 1 : 0;
        for (; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i))){
                number = number * 10 + s.charAt(i) - '0';
                if (minus && -number <= Integer.MIN_VALUE){
                    return Integer.MIN_VALUE;
                }
                if(!minus && number >= Integer.MAX_VALUE){
                    return Integer.MAX_VALUE;
                }

            }else if (!Character.isDigit(s.charAt(i))){
                break;
            }
        }
        return (int) (minus ? -number : number);
    }


    public static void main(String[] args) {
        Solution8 solution8 = new Solution8();
        System.out.println(solution8.myAtoi("-2147483647"));
    }
}