class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false; // Negative numbers are not palindromes
        }
        
        long long int sum = 0, i = x;
        while (x > 0) {
            sum = sum * 10 + (x % 10);
            x = x / 10;
        }
        
        // Compare the original number with the reversed number
        if (i == sum) {
            return true;
        } else {
            return false;
        }
    }
};
