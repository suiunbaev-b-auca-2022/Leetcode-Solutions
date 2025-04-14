class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine().replaceAll("\"", "").trim();
        System.out.println(lengthOfLastWord(s));
    }

    public static int lengthOfLastWord(String s) {
        int count = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s.charAt(i) != ' ') {
                count++;
            } else if (count > 0) {
                break;
            }
        }
        return count;
    }
}
