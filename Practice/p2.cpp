#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    string str2;
    for (int i = str.length() - 1; i >= 0; i--) {
        str2.push_back(str[i]);
    }
    return str2;
}

int main() {
    string str = "hello";
    str = reverseString(str);
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }
    return 0;
}
