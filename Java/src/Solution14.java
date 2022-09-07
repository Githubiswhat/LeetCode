public class Solution14 {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0){
            return "";
        }
        String prefix = strs[0];
        for (int i = 0; i < prefix.length(); i++) {
            char c = prefix.charAt(i);
            for (String str : strs) {
                if (i == str.length() || str.charAt(i) != c) {
                    return prefix.substring(0, i);
                }
            }
        }
        return prefix;
    }
}
