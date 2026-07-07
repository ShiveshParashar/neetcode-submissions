class Solution {
public:
    int reverse(int x) {
         int result = 0;
    
    while (x != 0) {
        int digit = x % 10;  // Get the last digit
        x /= 10;  // Remove the last digit from x
        
        // Check for overflow before updating the result
        // If the result is going to overflow, return 0
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
            return 0;  // Overflow
        }
        if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < INT_MIN % 10)) {
            return 0;  // Underflow
        }
        
        result = result * 10 + digit;  // Add the digit to the reversed number
    }
    
    return result;
    }
};