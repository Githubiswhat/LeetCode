package Solution2401_2500;

import java.util.*;
import java.util.stream.Collectors;

/**
 * @author windows
 */
public class Solution2418 {
    public String[] sortPeople(String[] names, int[] heights) {
        ArrayList<People> list = new ArrayList<>();
        for (int i = 0; i < names.length; i++) {
            list.add(new People(names[i], heights[i]));
        }
        Collections.sort(list, (o1, o2) -> o2.getHeight() - o1.getHeight());
        return list.stream().map(o1 -> o1.getName()).collect(Collectors.toList()).toArray(new String[list.size()]);
    }

    class People{
        String name;
        int height;

        public int getHeight() {
            return height;
        }

        public String getName() {
            return name;
        }

        public People(String name, int height) {
            this.name = name;
            this.height = height;
        }
    }


//    public String[] sortPeople(String[] names, int[] heights) {
//        int n = names.length;
//        Map<String, Integer> map = new IdentityHashMap<>();
//        for (int i = 0; i < n; ++i) {
//            map.put(names[i], heights[i]);
//        }
//        Arrays.sort(names, (n1, n2) -> Integer.compare(map.get(n2), map.get(n1)));
//        return names;
//    }

    public static void main(String[] args) {
        Solution2418 solution2418 = new Solution2418();
    }
}