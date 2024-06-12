#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s = "abc";
    string t = "ahbgd";
    int i = 0, j = 0;

    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }

    if (i == s.length()) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}