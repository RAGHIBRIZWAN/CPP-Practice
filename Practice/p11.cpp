#include <iostream>
using namespace std;

int main() {
    int bin;
    cin >> bin;
    int value = 0;
    int base = 1; 

    while (bin > 0) {
        int remainder = bin % 10;
        bin /= 10;
        value += remainder * base;
        base *= 2;
    }

    cout << value;
    return 0;
}
