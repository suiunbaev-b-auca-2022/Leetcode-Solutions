class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0) {
            return true;
        }
        if (x < 0) {
            return false;
        }
        int numToReverse = x;
        long reversed = 0;
        while (numToReverse != 0) {
            int digit = numToReverse % 10;
            reversed = reversed * 10 + digit;
            numToReverse = numToReverse / 10;
        }
        if(reversed == x) {
            return true;
        } else {
            return false;
        }
    }
};
