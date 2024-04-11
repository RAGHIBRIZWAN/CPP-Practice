#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int haystackLen = haystack.length();
    int needleLen = needle.length();

    if (needleLen == 0) {
        return 0; 
    }

    if (haystackLen < needleLen) {
        return -1; 
    }

    for (int i = 0; i < haystackLen; i++) {
        int j;
        for (j = 0; j < needleLen; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == needleLen) {
            return i;
        }
    }

    return -1;
}

int main() {
    cout << strStr("sadbutstd", "std") << endl;
    return 0;
}
