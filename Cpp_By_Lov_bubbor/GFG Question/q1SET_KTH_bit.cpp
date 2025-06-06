// #include <iostream>
// #include <cmath>
// using namespace std;
// // int decimal(int n){
// //     int i =0;
// //     int dec=0;
// //     while (n>=0)
// //     {
// //         int secbit =n%10;
// //         dec=dec+secbit*pow(2,i++);
// //         n/=10;

// //     }
// //     return dec;

// // }

// int SetBit(int n, int k)
// {
//     int i = 0;
//     int binary = 0;
//     while (n > 0)
//     {
//         int bit = n % 2;
//         if (k == i)
//         {
//             if (bit == 0)
//             {
//                 bit = 1;
//             }
//         }

//         binary = bit * pow(10, i) + binary;
//         n = n / 2;
//         i++;
//     }
//     // binary
//     int l = 0;
//     int dec = 0;
//     while (binary >= 0)
//     {
//         int secbit = binary % 10;
//         dec = dec + secbit * pow(2, l++);
//         binary /= 10;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int n = 10;
//     int k = 2;

//     int binaryNo = SetBit(n, k);
//     cout << binaryNo;
//     return 0;
// }



#include<iostream>
int main(int argc, char const *argv[])
{
    int N=10;
    int K=2;

    int mask =1<<K;
    int ans = N|mask;

    return 0;
}
