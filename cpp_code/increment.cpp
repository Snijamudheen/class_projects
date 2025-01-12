/*You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's. 
Increment the large integer by one and return the resulting array of digits.

Constraints: 1 <= digits.length <= 100 0 <= digits[i] <= 9 digits does not contain any leading 0's.
source: https://alkeshghorpade.me/post/leetcode-plus-one*/

class Solution 
{
    public:
        vector<int> plusOne(vector<int>& digits) 
        {
            int size = digits.size(), increment = 1;

            for (int i = size - 1; i >= 0 && increment != 0; i--)
            {
                increment += digits[i];
                digits[i] = increment % 10;
                increment = increment / 10;
            }

            if(increment != 0 )
            {
                digits.emplace(digits.begin(), 1);
            }
            return digits;
        }
};
