#include <iostream>
#include <iomanip>
using namespace std;

int findSquareRoot(int n) {
    int s = 0;
    int e = n;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        long long square = 1LL * mid * mid;
        if (square == n) {
            return mid;
        } else if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

double findprecision(int n, int prec) {
    double ans = findSquareRoot(n);
    double incr = 0.1;
    for (int i = 0; i < prec; i++) { // FIXED here
        while ((ans + incr) * (ans + incr) <= n) {
            ans += incr;
        }
        incr /= 10;
    }
    return ans;
}

int main() {
    int prec = 13;
    cout << fixed << setprecision(prec);
    cout << "Square root of 12 with " << prec << " decimal precision: ";
    cout << findprecision(10, prec) << endl;

    return 0;
}
