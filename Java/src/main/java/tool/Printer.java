package tool;

/**
 * @author windows
 */
public class Printer{
    private int val;
    private String leftChildLink;

    public int getVal() {
        return val;
    }

    public void setVal(int val) {
        this.val = val;
    }

    private String rightChildLink;

    public String getLeftChildLink() {
        return leftChildLink;
    }

    public void setLeftChildLink(String leftChildLink) {
        this.leftChildLink = leftChildLink;
    }

    public String getRightChildLink() {
        return rightChildLink;
    }

    public void setRightChildLink(String rightChildLink) {
        this.rightChildLink = rightChildLink;
    }
}