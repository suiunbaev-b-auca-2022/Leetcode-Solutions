class Solution {
    public static int singleNumber(int[] nums) {
        int[] cont = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            for (int j = (0); j < nums.length; j++) {
                if (nums[i] == nums[j]) {
                    cont[i]++;
                }
            }
            if (cont[i] == 1) {
                return nums[i];
            }
        }
        return -1;
    }
}
