#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int i = 0, j = height.size() - 1;
    int maxArea = 0;

    while (i < j) {
        // Calculate the area with the current pair of lines
        int minHeight = min(height[i], height[j]);
        int width = j - i;
        int currentArea = minHeight * width;

        // Update maxArea if the current area is larger
        if (currentArea > maxArea) {
            maxArea = currentArea;
        }

        // Move the pointer pointing to the shorter line
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }

    cout << maxArea;
    return 0;
}
