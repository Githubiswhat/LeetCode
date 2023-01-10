package QuestionBank.Solution001_100;

import java.util.ArrayList;

/**
 * @author windows
 */
public class Solution71 {
    public String simplifyPath(String path) {
        ArrayList<String> list = new ArrayList<>();
        path = path + '/';
        while (path.indexOf('/') != -1){
            int index = path.indexOf('/');
            if (index == 0){
                path = path.substring(1);
                continue;
            }
            String doc = path.substring(0, index);
            if (doc.length() == 0){
                continue;
            }else if (doc.equals(".")){
                path = path.substring(index + 1);
                continue;
            } else if (doc.equals("..")){
                if (list.size() > 0){
                    list.remove(list.size() - 1);
                }
            }else{
                list.add(doc);
            }
            path = path.substring(index + 1);
        }
        StringBuilder sb = new StringBuilder("/");
        for (String doc : list){
            sb.append(doc + '/');
        }
        return sb.length() > 1 ? sb.substring(0, sb.length() - 1) : sb.toString();
    }


    public static void main(String[] args) {
        Solution71 solution71 = new Solution71();
        System.out.println(solution71.simplifyPath("/a/../../b/../c//./"));
    }
}