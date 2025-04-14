class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;  // Handle empty input
        
        int k = 1;  // Start from 1 because the first element is always unique
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {  // Compare with the previous element
                nums[k] = nums[i];  // Place the unique element at index k
                k++;  // Increment the unique count
            }
        }
        
        return k;  // Return the count of unique elements
    }
};
