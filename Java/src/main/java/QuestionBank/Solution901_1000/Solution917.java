package QuestionBank.Solution901_1000;

/**
 * @author windows
 */
public class Solution917 {
    public String reverseOnlyLetters(String s) {
        char[] chars = s.toCharArray();
        int left = 0;
        int right = chars.length - 1;
        while(left < right){
            while(left < right && !Character.isLetter(chars[left])){
                left++;
            }
            while(left < right && !Character.isLetter(chars[right])){
                right--;
            }
            if(left < right){
                char temp = chars[left];
                chars[left] = chars[right];
                chars[right] = temp;
                left++;
                right--;
            }
        }
        return new String(chars);
    }


    public static void main(String[] args) {
        Solution917 solution917 = new Solution917();
    }
}