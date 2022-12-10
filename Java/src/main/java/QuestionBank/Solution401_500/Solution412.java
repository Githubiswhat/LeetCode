package QuestionBank.Solution401_500;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution412 {
    public List<String> fizzBuzz(int n) {
        ArrayList<String> list = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0){
                list.add("FizzBuzz");
            }else if (i % 3 == 0){
                list.add("Fizz");
            }else if (i % 5 == 0){
                list.add("Buzz");
            }else{
                list.add(String.valueOf(i));
            }
        }
        return list;
    }


    public static void main(String[] args) {
        Solution412 solution412 = new Solution412();
    }
}