package Solution901_1000;

import java.util.ArrayList;

/**
 * @author windows
 */
public class Solution922 {
//    public int[] sortArrayByParityII(int[] nums) {
//        for (int i = 0; i < nums.length; i++) {
//            if (i % 2 == 0 && nums[i] % 2 != 0){
//                for (int j = i + 1; j < nums.length; j++) {
//                    if (j % 2 != 0 && nums[j] % 2 == 0){
//                        int temp = nums[j];
//                        nums[j] = nums[i];
//                        nums[i] = temp;
//                        break;
//                    }
//                }
//            }else if(i % 2 != 0 && nums[i] % 2 == 0){
//                for (int j = i + 1; j < nums.length; j++) {
//                    if (j % 2 == 0 && nums[j] % 2 != 0){
//                        int temp = nums[j];
//                        nums[j] = nums[i];
//                        nums[i] = temp;
//                        break;
//                    }
//                }
//            }
//        }
//        return nums;
//    }

    public int[] sortArrayByParityII(int[] nums) {
        ArrayList<Integer> odd = new ArrayList<>();
        ArrayList<Integer> even = new ArrayList<Integer>();
        for (int i = 0; i < nums.length; i++) {
            if (i % 2 == 0 && nums[i] % 2 != 0){
                odd.add(i);
            }else if(i % 2 != 0 && nums[i] % 2 == 0){
                even.add(i);
            }
        }
        for (int i = 0; i < odd.size(); i++) {
            int indexOdd = odd.get(i);
            int indexEven = even.get(i);
            int temp = nums[indexEven];
            nums[indexEven] = nums[indexOdd];
            nums[indexOdd] = temp;
        }
        return nums;
    }


    public static void main(String[] args) {
        Solution922 solution922 = new Solution922();
    }
}