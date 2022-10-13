package Solution1601_1700;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution1656 {
    static class OrderedStream {
        private List<String> list;
        private int index;
        public OrderedStream(int n) {
            list = new ArrayList<>(n);
            for (int i = 0; i < n; i++) {
                list.add("");
            }
            index = 0;
        }

        public List<String> insert(int idKey, String value) {
            list.set(idKey - 1, value);
            ArrayList<String> res = new ArrayList<>();
            if (index == idKey - 1){
                while(index < list.size()){
                    if(list.get(index) != ""){
                        res.add(list.get(index));
                        index++;
                    }else{
                        break;
                    }
                }
            }
            return res;
        }
    }
    
    
    public static void main(String[] args) {
        Solution1656 solution1656 = new Solution1656();
        OrderedStream orderedStream = new OrderedStream(5);
        orderedStream.insert(3, "ccccccc");
        orderedStream.insert(1, "aaaaaaa");
        orderedStream.insert(2, "bbbbbbb");
        orderedStream.insert(5, "eeeeeee");
        orderedStream.insert(4, "ddddddd");
    }
}