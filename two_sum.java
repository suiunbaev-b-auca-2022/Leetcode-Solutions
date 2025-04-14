class Solution {
    public int[] twoSum(int[] nums, int target) {
    Map<Integer, Integer> indices = new HashMap<>();
    for (int i = 0; i < nums.length; i++) {
        int complement = target - nums[i];
        if (indices.containsKey(complement)) {
            return new int[] { indices.get(complement), i };
        }
        indices.put(nums[i], i);
    }
    return null; // no solution found
}
}
