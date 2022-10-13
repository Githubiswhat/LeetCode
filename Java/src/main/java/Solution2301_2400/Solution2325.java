package Solution2301_2400;    
/**
 * @author windows
 */
public class Solution2325 {
    public String decodeMessage(String key, String message) {
        int[] chars = new int[26];
        int index = 1;
        for (int i = 0; i < key.length(); i++) {
            if (key.charAt(i) == ' '){
                continue;
            }
            if (chars[key.charAt(i) - 'a'] == 0){
                chars[key.charAt(i) - 'a'] = index++;
            }
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < message.length(); i++) {
            if (message.charAt(i) == ' '){
                sb.append(" ");
            }else{
                sb.append((char)(chars[message.charAt(i) - 'a'] - 1 + 'a'));
            }
        }
        return sb.toString();
    }
    
    
    public static void main(String[] args) {
        Solution2325 solution2325 = new Solution2325();
        System.out.println(solution2325.decodeMessage("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv"));
    }
}