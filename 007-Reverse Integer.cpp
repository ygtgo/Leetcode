Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21


class Solution {
public:
    int reverse(int n) {
        long long res = 0;            //long long 避免运算过程中导致溢出
        while (n != 0){
            res = 10 * res + n % 10;
            n /= 10;
        }
        return (res < INT_MIN || res > INT_MAX) ? 0 : res;  //判断是否溢出
    }
};
