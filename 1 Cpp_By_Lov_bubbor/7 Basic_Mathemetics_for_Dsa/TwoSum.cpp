#include <iostream>
using namespace std;

int getSum(int a, int b)
{
    // int ans1 = 0;
    // int i = 0;
    // while (a != 0) {
    //     int bit = a & 1;
    //     // int bit = n % 10;
    //     ans1 = (bit * pow(10, i)) + ans1;

    //     a = a >> 1;
    //     i++;
    // }

    // int ans2 = 0;
    // int j = 0;
    // while (b != 0) {
    //     int bit = b & 1;
    //     // int bit = n % 10;
    //     ans2 = (bit * pow(10, j)) + ans2;

    //     b = b >> 1;
    //     j++;
    // }

    // int ans3 = 0;
    // int carry = 0;
    // int power = 0;

    // while (ans1 > 0 || ans2 > 0 || carry > 0) {
    //     int bit1 = ans1 % 10;
    //     int bit2 = ans2 % 10;

    //     int sum = bit1 + bit2 + carry;
    //     int resultBit = sum % 2;
    //     carry = sum / 2;

    //     ans3 += resultBit * pow(10, power);
    //     power++;

    //     ans1 /= 10;
    //     ans2 /= 10;
    // }

    // int ans4 = 0;
    // i = 0;
    // while (ans3 != 0) {
    //     // int bit = n & 1;
    //     int digit = ans3 % 10;
    //     // int bit = n % 10;
    //     if (digit == 1) {
    //         ans4 = pow(2, i) + ans4;
    //     }

    //     ans3 = ans3 / 10;
    //     i++;
    // }

    // return ans4;

    while (b != 0)
    {
        // Carry now contains common set bits of a and b
        auto carry = a & b;

        // Sum of bits of a and b where at least one of the bits is not set
        a = a ^ b;

        // Carry is shifted by one so that adding it to a gives the required sum
        b = carry << 1;
    }
    return a;
}

int main(int argc, char const *argv[])
{

    cout << getSum(1, 2);
    return 0;
}
