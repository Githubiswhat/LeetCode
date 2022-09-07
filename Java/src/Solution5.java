//public class Solution5 {
//    public String longestPalindrome(String s) {
//        int max = 0;
//        String maxStr = "";
//        for (int i = 0; i < s.length(); i++) {
//            for (int j = i + 1; j < s.length(); j++) {
//                if (isPalindrome(s.substring(i,j))){
//                    if (j - i > max){
//                        max = j - i;
//                        maxStr = s.substring(i,j);
//                    }
//                }
//            }
//        }
//        return maxStr;
//    }

public class Solution5 {
    public String longestPalindrome(String s) {
        int len = s.length();
        int begin = 0;
        int maxLen = 1;
        boolean[][] dp = new boolean[len][len];
        for (int i = 0; i < len; i++) {
            dp[i][i] = true;
        }
        for (int L = 2; L <= len; L++) {
            for (int i = 0; i < len; i++) {
                int j = L + i - 1;
                if (j >= len) {
                    break;
                }
                if (s.charAt(i) != s.charAt(j)) {
                    dp[i][j] = false;
                } else {
                    if (j - i < 3) {
                        dp[i][j] = true;
                    } else {
                        dp[i][j] = dp[i + 1][j - 1];
                    }
                }
                if (dp[i][j] && (j - i + 1> maxLen)) {
                    maxLen = j - i + 1  ;
                    begin = i;
                }
            }
        }
        return s.substring(begin, begin + maxLen);
    }
}
