class Solution
{
public:
    int romanToInt(string s)
    {
        // Stores the final integer value as we process the Roman numeral
        int total = 0;

        // Loop through each Roman numeral character in the string
        for (int i = 0; i < s.size(); i++)
        {
            // Convert the current Roman character into its integer value
            int currentValue = value(s[i]);

            // Check if there is a next character to compare with
            if (i + 1 < s.size())
            {
                // Convert the next Roman character into its integer value
                int nextValue = value(s[i + 1]);

                // If the current value is smaller than the next value,
                // this is a subtraction case like IV, IX, XL, XC, CD, or CM
                if (currentValue < nextValue)
                {
                    total -= currentValue;
                }
                else
                {
                    // Otherwise, add the current value normally
                    total += currentValue;
                }
            }
            else
            {
                // If there is no next character, add the current value
                total += currentValue;
            }
        }

        // Return the completed integer conversion
        return total;
    }

    // Helper function that converts a Roman numeral character into its integer value
    int value(char c)
    {
        if (c == 'I')
        {
            return 1;
        }
        else if (c == 'V')
        {
            return 5;
        }
        else if (c == 'X')
        {
            return 10;
        }
        else if (c == 'L')
        {
            return 50;
        }
        else if (c == 'C')
        {
            return 100;
        }
        else if (c == 'D')
        {
            return 500;
        }
        else if (c == 'M')
        {
            return 1000;
        }

        // Fallback value; LeetCode guarantees valid Roman numerals,
        // so this should not be reached
        return 0;
    }
};
