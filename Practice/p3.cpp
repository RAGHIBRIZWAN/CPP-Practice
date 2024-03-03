/*Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation.*/


#include <iostream>
using namespace std;

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 1, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    int max = arr[0];
    int min = arr[0];
    int max_count = 1;
    int min_count = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_count = 1; 
        } else if (arr[i] == max) {
            max_count++; 
        }

        if (arr[i] < min) {
            min = arr[i];
            min_count = 1; 
        } else if (arr[i] == min) {
            min_count++; 
        }

        sum += arr[i];
    }

    sum -= (max * max_count) + (min * min_count);
    cout << "Sum except highest and lowest (ignoring repeats): " << sum << endl;

    return 0;
}
