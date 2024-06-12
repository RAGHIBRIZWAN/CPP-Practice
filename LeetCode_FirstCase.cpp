#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int haystackLen = haystack.length();
    int needleLen = needle.length();

    if (needleLen == 0) {
        return 0; // Empty needle matches at index 0
    }

    if (haystackLen < needleLen) {
        return -1; // Needle is longer than haystack, not possible
    }

    for (int i = 0; i < haystackLen; i++) {
        int j;
        for (j = 0; j < needleLen; j++) {
            if (haystack[i + j] != needle[j]) {
                break; // Mismatch, move to the next position in haystack
            }
        }
        if (j == needleLen) {
            return i; // Found needle at index i
        }
    }

    return -1; // Needle not found
}

int main() {
    cout << strStr("sadbutstd", "std") << endl; // Output: 2
    return 0;
}
