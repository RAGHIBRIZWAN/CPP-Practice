#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    if (strs.empty()) return "";

    // Sort the array
    std::sort(strs.begin(), strs.end());

    // Compare the first and the last strings
    std::string first = strs[0];
    std::string last = strs[strs.size() - 1];
    int i = 0;
    while (i < first.size() && i < last.size() && first[i] == last[i]) {
        i++;
    }

    // The common prefix is the substring from the start to the point where they differ
    return first.substr(0, i);
}

int main() {
    std::vector<std::string> strs = {"flower", "flow", "flight"};
    std::string result = longestCommonPrefix(strs);
    std::cout << "Longest Common Prefix: " << result << std::endl;
    return 0;
}
