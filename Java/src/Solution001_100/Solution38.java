package Solution001_100;

public class Solution38 {
    public String countAndSay(int n) {
        String s = "1";
        for (int i = 1; i < n; i++) {
            StringBuilder sb = new StringBuilder();
            int count = 1;
            for (int j = 1; j < s.length(); j++) {
                if (s.charAt(j) == s.charAt(j - 1)){
                    count++;
                }else{
                    sb.append(count);
                    sb.append(s.charAt(j-1));
                    count = 1;
                }
            }
            sb.append(count);
            sb.append(s.charAt(s.length() - 1));
            s = sb.toString();
        }
        return s;
    }

    public static void main(String[] args) {
        Solution38 solution38 = new Solution38();
        String s = solution38.countAndSay(4);
        System.out.println(s);
    }
}
