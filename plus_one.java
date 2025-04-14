class Solution {
    public int[] plusOne(int[] digits) {
        int n = digits.length;
        
        // Starting from the last digit, add 1 to it
        for (int i = n - 1; i >= 0; i--) {
            digits[i]++;
            
            // If the digit is less than 10, return the array
            if (digits[i] < 10) {
                return digits;
            }
            
            // If the digit is equal to 10, set it to 0 and carry over to the next digit
            digits[i] = 0;
        }
        
        // If we reach here, it means all digits were 9s and we need to add an extra digit
        int[] result = new int[n + 1];
        result[0] = 1;
        return result;
    }
}
