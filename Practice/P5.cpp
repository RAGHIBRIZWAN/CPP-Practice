#include <iostream>
#include <string>
using namespace std;

void reverse(string& name) {
    int n = name.length();
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }
}

int main() {
    string name = "abcde";
    
    reverse(name);

    cout << name << endl;
    return 0;
}
