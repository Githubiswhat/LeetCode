package QuestionBank.Solution301_400;

/**
 * @author windows
 */
public class Solution345 {
    public String reverseVowels(String s) {
        int left = 0;
        int right = s.length() - 1;
        char[] chars = s.toCharArray();
        while (left < right) {
            while(left < right && Character.toLowerCase(chars[left]) != 'a' &&
                                  Character.toLowerCase(chars[left]) != 'e' &&
                                  Character.toLowerCase(chars[left]) != 'i' &&
                                  Character.toLowerCase(chars[left]) != 'o' &&
                                  Character.toLowerCase(chars[left]) != 'u'){
                left++;
            }
            while(left < right && Character.toLowerCase(chars[right]) != 'a' &&
                  Character.toLowerCase(chars[right]) != 'e' &&
                  Character.toLowerCase(chars[right]) != 'i' &&
                  Character.toLowerCase(chars[right]) != 'o' &&
                  Character.toLowerCase(chars[right]) != 'u'){
                right--;
            }
            if (left < right){
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
        Solution345 solution345 = new Solution345();
        System.out.println(solution345.reverseVowels("aA"));
    }
}