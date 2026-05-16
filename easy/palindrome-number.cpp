class Solution {
public:
    bool isPalindrome(int x)
    {
        // Negative numbers cannot be palindromes
        if (x < 0)
        {
            return false;
        }

        // Convert the number to a string so we can compare digits by index
        string s = to_string(x);

        // Start one pointer at the beginning and one at the end
        int left = 0;
        int right = s.size() - 1;

        // Keep comparing while the pointers have not met or crossed
        while (left < right)
        {
            // If the characters are different, it is not a palindrome
            if (s[left] != s[right])
            {
                return false;
            }

            // Move both pointers toward the middle
            left++;
            right--;
        }

        return true;
    }
};
