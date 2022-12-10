package QuestionBank.Solution801_900;

/**
 * @author windows
 */
public class Solution860 {
    public boolean lemonadeChange(int[] bills) {
        if (bills[0] != 5){
            return false;
        }
        int[] money = new int[3];
        money[0]++;
        for (int i = 1; i < bills.length; i++) {
            if (bills[i] == 5){
                money[0]++;
            }else if(bills[i] == 10){
                if (money[0] < 1){
                    return false;
                }
                money[0]--;
                money[1]++;
            }else{
                if (money[1] == 0){
                    if (money[0] < 3){
                        return false;
                    }else{
                        money[0] -= 3;
                    }
                }else{
                    if (money[0] < 1){
                        return false;
                    }
                    money[0]--;
                    money[1]--;
                }
            }
        }
        return true;
    }


    public static void main(String[] args) {
        Solution860 solution860 = new Solution860();
    }
}