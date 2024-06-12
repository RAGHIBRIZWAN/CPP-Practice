#include <iostream>
using namespace std;

bool canWinNim(int n) {
    // If the number of stones is divisible by 4, you will lose.
    return n % 4 != 0;
}

int main() {
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;
    if (canWinNim(n)) {
        cout << "You can win the game!" << endl;
    } else {
        cout << "You will lose the game." << endl;
    }
    return 0;
}