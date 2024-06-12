#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 0, 2, 0, 3};
    int temp = 0;
    // sort(nums.begin(), nums.end(), greater<int>());// Descending Order
    // sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == 0)
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}