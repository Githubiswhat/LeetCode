package QuestionBank.Solution1601_1700;

import java.util.LinkedList;

/**
 * @author windows
 */
public class Solution1700 {
    public int countStudents(int[] students, int[] sandwiches) {
        LinkedList<Integer> stu = new LinkedList<>();
        int countZero = 0;
        int countOne = 0;
        int index = 0;
        for (int i = 0; i < students.length; i++) {
            stu.add(students[i]);
            if (students[i] == 1){
                countOne++;
            }else{
                countZero++;
            }
        }
        while (countZero != stu.size() && countOne != stu.size()) {
            int food = sandwiches[index];
            if (stu.get(0) == food){
                index++;
                stu.remove(0);
                if (food == 1){
                    countOne--;
                }else{
                    countZero--;
                }
            }else{
                stu.add(stu.get(0));
                stu.remove(0);
            }
        }
        if (stu.size() == 1 && stu.get(0) == sandwiches[index]){
            return 0;
        }
        return stu.size();
    }
    
    
    public static void main(String[] args) {
        Solution1700 solution1700 = new Solution1700();
        System.out.println(solution1700.countStudents(new int[]{1, 1, 0, 0}, new int[]{0, 1, 0, 1}));
    }
}