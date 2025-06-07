#include <iostream> // Include the iostream library for input and output operations
using namespace std;

// Function to calculate power using Binary Exponentiation
int FindPower(int n, int p)
{
    // Base case: Any number to the power of 0 is 1
    if (p == 0)
    {
        return 1;
    }
    // Base case: 0 to any power (except 0^0) is 0
    if (n == 0)
    {
        return 0;
    }

    int ans = 1; // Initialize the answer to 1

    // Implementing Binary Exponentiation (Efficient Power Calculation)
    while (p > 0)
    {
        // If the current power is odd, multiply the answer with the base
        if (p & 1)
        {
            ans *= n;
        }

        // Square the base (Exponentiation by squaring technique)
        n *= n;

        // Divide the power by 2 (Right shift operation in binary terms)
        p /= 2;
    }

    return ans; // Return the calculated power
}

int main(int argc, char const *argv[])
{
    int n = 5; // Base number
    int p = 4; // Exponent

    // Call the function to compute power
    int ans = FindPower(n, p);

    // Print the result
    cout << ans;

    return 0; // Indicate successful execution
}
