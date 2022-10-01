package tool;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @author windows
 */
public class TreeGenerate {


    public static TreeNode createTree(Integer[] array) {
        List<TreeNode> list = createTreeList(array, new ArrayList());
        // 构建二叉树
        if (list.size() > 0) {
            for (int i = 0; i <= list.size() / 2 - 1; i++) {
                if (2 * i + 1 < list.size() && list.get(2 * i + 1) != null) {
                    // 左结点
                    list.get(i).left = list.get(2 * i + 1);
                }
                if (2 * i + 2 < list.size() && list.get(2 * i + 2) != null) {
                    // 右结点
                    list.get(i).right = list.get(2 * i + 2);
                }
            }
        }
        return list.get(0);
    }

    public static List<TreeNode> createTreeList(Integer[] array, List<TreeNode> list) {
        for (int i = 0; i < array.length; i++) {
            TreeNode node = null;
            if (array[i] != null) {
                node = new TreeNode(array[i], null, null);
            }
            list.add(node);
        }
        for (int i = 0; i < array.length; i++) {
            if (array[i] == null) {
                if ((2 * i + 1) < list.size()) {
                    list.add(2 * i + 1, null);
                }
                if ((2 * i + 2) < list.size()) {
                    list.add(2 * i + 1, null);
                }
            }
        }
        return list;
    }

    private static int isTimesTwo(int n) throws Exception {
        if(!(n > 0 && (n & (n - 1)) == 0)){
            throw new Exception("参数有误,不是2的整数次幂");
        }
        return Integer.toBinaryString(n).length()-1;
    }

    private static Map<Integer, List<Printer>> printTree(Map<Integer, List<Printer>> map, List<TreeNode> node) {
        int index = 1;
        for (int i = 0; i < node.size(); i++) {
            if ((i + 1 & (i + 1 - 1)) == 0){
                index++;
            }
            List<Printer> list = map.getOrDefault(index, new ArrayList<>());
            if (node.get(i) != null) {
                Printer printer = new Printer();
                printer.setVal(node.get(i).getVal());
                if ((2 * i + 1) < node.size() && node.get(2 * i + 1) != null) {
                    printer.setLeftChildLink("/");
                }
                if ((2 * i + 1) < node.size() && node.get(2 * i + 2) != null){
                    printer.setRightChildLink("\\");
                }
                list.add(printer);
            }else {
                list.add(null);
            }
            map.put(index, list);
        }
        return map;
    }

    public static void print(List<TreeNode> node) {
        Map<Integer, List<Printer>> map = printTree(new HashMap(), node);
        int nums = map.size();
        int position = (int) (6 * Math.pow(2, (nums - 2)) - 1);
        for (List<Printer> printers : map.values()) {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < (position - printers.size()) / (printers.size() + 1); i++) {
                sb.append(" ");
            }
            String separator = sb.toString();
            sb = new StringBuilder();
            for (int i = 0; i < (position - printers.size() * 2) / (printers.size() * 2 + 1); i++) {
                sb.append(" ");
            }
            String separatorTree = sb.toString();
            System.out.print(separator);
            sb = new StringBuilder();
            for (int i = 0; i < printers.size(); i++) {
                if (printers.get(i) == null){
                    System.out.print(" " + separator);
                }else{
                    Printer printer = printers.get(i);
                    System.out.print(printer.getVal() + separator);
                }
            }
            System.out.println();
            System.out.print(separatorTree);
            for (int i = 0; i < printers.size(); i++) {
                if (printers.get(i) == null){
                    System.out.print(" " + separatorTree);
                    System.out.print(" " + separatorTree);
                }else{
                    if (printers.get(i).getLeftChildLink() != null){
                        System.out.print(" /" + separatorTree);
                    }else {
                        System.out.print(" " + separatorTree);
                    }
                    if (printers.get(i).getRightChildLink() != null){
                        System.out.print("\\" + separatorTree);
                    }else{
                        System.out.print(" " + separatorTree);
                    }
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Integer[] array = {1, 2, 3, null, 4, 5, null, 6, 7, 8, 9};
        List<TreeNode> list = createTreeList(array, new ArrayList());
        print(list);
    }
}





















