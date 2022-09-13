public class Solution11 {
    public int maxArea(int[] height) {
        int left = 0, right = height.length - 1;
        int area = (right - left) * (height[left] < height[right] ? height[left] : height[right]);
        while (left < right) {
            if (height[left] < height[right]) {
                int i = left;
                while (i < right && height[i] <= height[left]) {
                    i++;
                }
                if (i != right) {
                    left = i;
                    if ((right - left) * (height[left] < height[right] ? height[left] : height[right]) > area) {
                        area = (right - left) * (height[left] < height[right] ? height[left] : height[right]);
                    }
                } else {
                    break;
                }
            } else {
                int i = right;
                while (i > left && height[i] <= height[right]) {
                    i--;
                }
                if (i != left) {
                    right = i;
                    if ((right - left) * (height[left] < height[right] ? height[left] : height[right]) > area) {
                        area = (right - left) * (height[left] < height[right] ? height[left] : height[right]);
                    }
                } else {
                    break;
                }
            }
        }
        return area;
    }

    public static void main(String[] args) {
        Solution11 solution11 = new Solution11();
        int[] nums = {1,1};
        int result = solution11.maxArea(nums);
        System.out.println(result);
    }
}
