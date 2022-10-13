package Solution601_700;

import java.util.ArrayList;

/**
 * @author windows
 */
public class Solution682 {
    public int calPoints(String[] operations) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < operations.length; i++) {
            if (operations[i].equals("D")){
                list.add(list.get(list.size() - 1) * 2);
            }else if (operations[i].equals("+")){
                list.add(list.get(list.size() - 1)  + list.get(list.size() - 2));
            }else if (operations[i].equals("C")){
                list.remove(list.size() - 1);
            }else{
                list.add(Integer.valueOf(operations[i]));
            }
        }
        int sum = 0;
        for (int i = 0; i < list.size(); i++) {
            sum += list.get(i);
        }
        return sum;
    }



    public static void main(String[] args) {
        Solution682 solution682 = new Solution682();
        System.out.println(solution682.calPoints(new String[]{"5", "2", "C", "D", "+"}));
    }
}