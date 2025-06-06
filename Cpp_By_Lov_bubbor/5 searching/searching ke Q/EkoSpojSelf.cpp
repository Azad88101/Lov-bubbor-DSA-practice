#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the total wood collected if saw height is `mid`
long long int ValidatingHieght(vector<long long int>& arr, long long int mid) {
    long long int totalWood = 0;
    for (long long int height : arr) {
        if (height > mid) {
            totalWood += (height - mid); // Collect wood only from trees taller than `mid`
        }
    }
    return totalWood;
}


long long int FindMaxHeightOfSaw(vector<long long int>& arr, long long int m) {
    long long int start = 0;
    long long int end = *max_element(arr.begin(), arr.end());
    long long int ans = 0;

    while (start <= end) {
        long long int mid = start + (end - start) / 2;
        // long long int wood = ValidatingHieght(arr, mid);

        if (ValidatingHieght(arr, mid) >= m) {
            ans = mid;   
            start = mid + 1;
        } else {
            end = mid - 1;  
        }
    }
    return ans;
}

int main() {
    vector<long long int> arr;
    long long int n, m;

    cin >> n >> m;

    for (long long int i = 0; i < n; i++) {
        long long int height;
        cin >> height;
        arr.push_back(height);
    }

    cout << FindMaxHeightOfSaw(arr, m) << endl;

    return 0;
}
