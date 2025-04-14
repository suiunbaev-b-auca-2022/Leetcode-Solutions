class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] num = input.nextLine().split(" ");
        int x = Integer.parseInt(num[2]);
        System.out.println(mySqrt(x));

    }
    public static int mySqrt(int x) {
        return (int) Math.sqrt(x);
    }
}
