#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> output;

    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                output.push_back(nums1[i]);
                nums2.erase(nums2.begin() + j);
                break;
            }
        }
    }

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << ",";
    }

    return 0;
}
