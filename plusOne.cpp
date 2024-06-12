#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> incrementLargeInteger(vector<int>& digits) {
    int n = digits.size();
    
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    vector<int> digits = {4, 3, 2, 1};
    vector<int> result = incrementLargeInteger(digits);

    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}